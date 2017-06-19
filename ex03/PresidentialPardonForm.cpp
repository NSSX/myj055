#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5), cible("defaultCible")
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5), cible(src.cible)
{
    *this = src;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string cible) : Form("PresidentialPardonForm", 25, 5), cible(cible)
{
    return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->cible << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->cible = rhs.cible;
	return (*this);
}
