#include "Intern.hpp"

Form *presidential(std::string cible){
    return(new PresidentialPardonForm(cible));
}
Form *robotomy(std::string cible){
    return(new RobotomyRequestForm(cible));
}
Form *shrubery(std::string cible){
    return (new ShrubberyCreationForm(cible));
}

Form	*Intern::makeForm(std::string name, std::string cible) const
{
	std::string	choice[3] = {"robotomy request","shrubbery request","presidential request"};
	Form*(*f[3])(std::string cible) = {robotomy,shrubery,presidential};

	for(int i = 0; i < 3; i++){
        if(choice[i] == name){
            std::cout << "Intern creates " << name << std::endl;
            return (f[i](cible));
        }
    }
    std::cout << "Cant Create Inter.........SAD LIFEEEEE" << name << std::endl;
    return NULL;
}

Intern::Intern(void)
{
    return;
}

Intern::Intern(Intern const &src)
{
	*this = src;
    return;
}

Intern::~Intern()
{
    return;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}
