#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string cible);
    virtual ~PresidentialPardonForm();
    std::string cible;
    PresidentialPardonForm(PresidentialPardonForm const & src);
    PresidentialPardonForm		&operator=(PresidentialPardonForm const &rhs);
    virtual void action() const;
};

#endif
