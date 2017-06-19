#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
public:
	Intern(void);
	Intern(Intern const & src);
	virtual ~Intern();
	Form	*makeForm(std::string name, std::string cible) const;
	Intern	&operator=(Intern const &rhs);
};

#endif
