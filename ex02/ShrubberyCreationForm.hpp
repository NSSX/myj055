#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
    	std::string cible;

    	ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string cible);
    	ShrubberyCreationForm(ShrubberyCreationForm const & src);
        virtual ~ShrubberyCreationForm();
    	ShrubberyCreationForm		&operator=(ShrubberyCreationForm const &rhs);
    	virtual void action() const;
};

#endif
