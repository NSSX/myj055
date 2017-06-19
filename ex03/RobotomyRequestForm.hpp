#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{

public:
	std::string	cible;

	RobotomyRequestForm(void);
    RobotomyRequestForm(std::string cible);
	RobotomyRequestForm(RobotomyRequestForm const & src);
virtual    void					action() const;
    virtual ~RobotomyRequestForm();
	RobotomyRequestForm		&operator=(RobotomyRequestForm const &rhs);
};

#endif
