#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <ctime>

int main(void){
	std::srand(std::time(0));
	try{
		Bureaucrat jean("jean", 160);
	} catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat claude("claude", 0);
	} catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat quentin;
		std::cout << quentin << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat ninja("ninja", 2);
		std::cout<<ninja<<std::endl;
		ninja.incrementGrade();
		std::cout<<ninja<<std::endl;
		ninja.incrementGrade();
		std::cout<<ninja<<std::endl;
	} catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat ninja("ninja", 149);
		std::cout<<ninja<<std::endl;
		ninja.discrementGrade();
		std::cout<<ninja<<std::endl;
		ninja.discrementGrade();
		std::cout<<ninja<<std::endl;
	} catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------" << std::endl;
	Bureaucrat loki("loki", 12);
	Bureaucrat loki2("loki", 90);
	RobotomyRequestForm rob("victimous");
	loki.executeForm(rob);
	rob.beSigned(loki);
	loki.executeForm(rob);
	loki2.executeForm(rob);

	ShrubberyCreationForm sh("victimous2");
	sh.beSigned(loki);
	loki.executeForm(sh);

	Bureaucrat lokis("loki", 3);
	PresidentialPardonForm ps("victimous3");
	ps.beSigned(lokis);
	lokis.executeForm(ps);

	std::cout << "------------------------" << std::endl;
	Intern someRandomIntern;
	Bureaucrat lokise("lokise", 3);
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->beSigned(lokise);
	lokise.executeForm(*rrf);
	std::cout << "------------------------" << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
	rrf->beSigned(lokise);
	lokise.executeForm(*rrf);
	std::cout << "------------------------" << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("presidential request", "Bender");
	rrf->beSigned(lokise);
	lokise.executeForm(*rrf);

	delete rrf;
	return (0);
}
