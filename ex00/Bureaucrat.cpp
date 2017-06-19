#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) : _name("DefaultName"), _grade(50), _min_grade(150), _max_grade(1){

	if(_grade >_min_grade){
		throw Bureaucrat::GradeTooLowException();
	}
	else if(_grade < _max_grade){
		throw Bureaucrat::GradeTooHighException();
	}
	return;
}

Bureaucrat::Bureaucrat(std::string const name, int grade)  : _name(name), _grade(grade), _min_grade(150), _max_grade(1){
	if(_grade >_min_grade){
		throw Bureaucrat::GradeTooLowException();
	}
	else if(_grade < _max_grade){
		throw Bureaucrat::GradeTooHighException();
	}
	return;
}
Bureaucrat::~Bureaucrat(void){

	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	(void)rhs;
 	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)  : _name(src.getName()), _grade(src.getGrade()), _min_grade(150), _max_grade(1){
	if(_grade >_min_grade){
		throw Bureaucrat::GradeTooLowException();
	}
	else if(_grade < _max_grade){
		throw Bureaucrat::GradeTooHighException();
	}
	*this = src;
   return;
}

std::string Bureaucrat::getName(void) const{

	return this->_name;
}

int Bureaucrat::getGrade(void) const{

	return this->_grade;
}

void Bureaucrat::incrementGrade(){
	this->_grade--;
	if(_grade >_min_grade){
		throw Bureaucrat::GradeTooLowException();
	}
	else if(_grade < _max_grade){
		throw Bureaucrat::GradeTooHighException();
	}
	return;
}
void Bureaucrat::discrementGrade(){
	this->_grade++;
	if(_grade >_min_grade){
		throw Bureaucrat::GradeTooLowException();
	}
	else if(_grade < _max_grade){
		throw Bureaucrat::GradeTooHighException();
	}
	return;
}


const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "GradeTooHighException";
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw(){

}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){

}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs) throw(){
	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw(){
	*this = src;
   return;
}


const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "GradeTooLowException";
}


Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw(){

}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){

}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs) throw(){
	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw(){
	*this = src;
   return;
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){

  	o << rhs.getName() << ", bureaucrat grade "<< rhs.getGrade() <<std::endl;
    return o;
}
