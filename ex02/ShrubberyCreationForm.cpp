#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), cible("defaultCible")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137), cible(src.cible)
{
    *this = src;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string cible) : Form("ShrubberyCreationForm", 145, 137), cible(cible)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->cible = rhs.cible;
	return (*this);
}


void					ShrubberyCreationForm::action() const
{
    std::string folderName = cible + "_shrubbery";
	std::ofstream ofs(folderName.c_str());
	ofs << "ASCII trees" << std::endl;
}
