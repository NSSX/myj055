#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(void) :  _name("DefaultName"), _isSigned(false), _gradSign(33), _gradExec(12){
    if(_gradSign > 150 || _gradExec > 150){
        throw Form::GradeTooLowException();
    }
    else if(_gradSign < 1 || _gradSign < 1){
        throw Form::GradeTooHighException();
    }
    return;
}
Form::Form(std::string name, int gradSign, int gradExec) :  _name(name), _isSigned(false) , _gradSign(gradSign), _gradExec(gradExec){
    	if(_gradSign > 150 || _gradExec > 150){
    		throw Form::GradeTooLowException();
    	}
    	else if(_gradSign < 1 || _gradSign < 1){
    		throw Form::GradeTooHighException();
    	}
    	return;
}
Form::~Form(void){

}

Form & Form::operator=(Form const & rhs){
    (void)rhs;
    return *this;
}
Form::Form(Form const & src) : _name(src.getName()), _isSigned(src.getIsSigned()), _gradSign(src.getGradSign()), _gradExec(src.getGradExec()){

    if(_gradSign > 150 || _gradExec > 150){
        throw Form::GradeTooLowException();
    }
    else if(_gradSign < 1 || _gradSign < 1){
        throw Form::GradeTooHighException();
    }
    *this = src;
   return;
}

std::string Form::getName(void) const{
    return this->_name;
}
bool        Form::getIsSigned(void) const{
    return this->_isSigned;
}
void        Form::beSigned(Bureaucrat const &bur){
    if(bur.getGrade() <= getGradSign()){
        this->_isSigned = true;
    }else{
        throw Form::GradeTooLowException();
    }
}

int          Form::getGradSign(void) const{
    return this->_gradSign;
}

int          Form::getGradExec(void) const{
    return this->_gradExec;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "GradeTooHighException";
}

Form::GradeTooHighException::GradeTooHighException(void) throw(){

}
Form::GradeTooHighException::~GradeTooHighException(void) throw(){

}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs) throw(){
    (void)rhs;
    return *this;
}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw(){
    *this = src;
   return;
}

const char* Form::GradeTooLowException::what() const throw(){
    return "GradeTooLowException";
}
Form::GradeTooLowException::GradeTooLowException(void) throw(){

}
Form::GradeTooLowException::~GradeTooLowException(void) throw(){

}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs) throw(){
    (void)rhs;
	return *this;
}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw(){
    *this = src;
   return;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs){
    o << rhs.getName() << ", Form , Grad required to sign : "<< rhs.getGradSign() << " , Grad Required to execute : " << rhs.getGradExec() <<std::endl;
    return o;
}
