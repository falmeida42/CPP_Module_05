#include "ShurubberyCreationForm.hpp"
#include <fstream>

ShurubberyCreationForm::ShurubberyCreationForm() : AForm("ShrubberyForm", 145, 137)
{
    _target = "default";
    std::cout << "ShrubberyForm created" << std::endl; 
}

ShurubberyCreationForm::~ShurubberyCreationForm()
{
    std::cout << "ShrubberyForm destroyed" << std::endl;
}

void    ShurubberyCreationForm::execute(const Bureaucrat &Bureaucrat)
{
    std::ofstream file(_target.append("_shrubbery").append(".txt"));
}

