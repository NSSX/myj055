#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string const name, int grade);
	virtual ~Bureaucrat(void);

	Bureaucrat & operator=(Bureaucrat const & rhs);
	Bureaucrat(Bureaucrat const & src);

	std::string getName(void) const;
	int getGrade(void) const;

	void incrementGrade();
	void discrementGrade();


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
	std::string const _name;
	int _grade;
	int _min_grade;
	int _max_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
