#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), cible("defaultcible")
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45), cible(src.cible)
{
    *this = src;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string cible) : Form("RobotomyRequestForm", 72, 45), cible(cible)
{
}

void					RobotomyRequestForm::action() const
{
	std::cout << "some drilling noises" << std::endl;

	if (std::rand() % 2 == 0)
		std::cout << cible << " has been robotomized." << std::endl;
	else
		std::cout << cible << " has not been robotomoized." << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->cible = rhs.cible;
	return (*this);
}
