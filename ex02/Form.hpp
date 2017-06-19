#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form {

public:
    Form(void);
    Form(std::string name, int gradSign, int gradExec);
    virtual ~Form(void);
    Form(Form const & src);
    void		execute(Bureaucrat const &b) const;
    std::string getName(void) const;
    bool        getIsSigned(void) const;
    void        beSigned(Bureaucrat const &bur);
    int         getGradSign(void) const;
    int         getGradExec(void) const;
    Form & operator=(Form const & rhs);
    virtual void		action() const = 0;

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();

            GradeTooHighException(void) throw();
            virtual ~GradeTooHighException(void) throw();

            GradeTooHighException & operator=(GradeTooHighException const & rhs) throw();
            GradeTooHighException(GradeTooHighException const & src) throw();

    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
            GradeTooLowException(void) throw();
            virtual ~GradeTooLowException(void) throw();

            GradeTooLowException & operator=(GradeTooLowException const & rhs) throw();
            GradeTooLowException(GradeTooLowException const & src) throw();
    };

private:
    const std::string _name;
    bool _isSigned;
    const int _gradSign;
    const int _gradExec;

};
std::ostream & operator<<(std::ostream & o, Form const & rhs);
#endif
