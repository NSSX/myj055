#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void){

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
	Bureaucrat loki("loki", 43);
	std::cout << "------------------------" << std::endl;
	Form myForm("myForm", 57, 112);
	loki.signForm(myForm);
	Form myForm2("myForm2", 31, 112);
	loki.signForm(myForm2);
	try{
		Form myForm3("myForm3", 0, 148);
	}catch(Form::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form myForm3("myForm3", 151, 148);
	}catch(Form::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
