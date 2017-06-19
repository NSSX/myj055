#include "Bureaucrat.hpp"

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


	return (0);
}
