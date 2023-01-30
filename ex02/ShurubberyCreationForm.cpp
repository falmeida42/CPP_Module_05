#include "ShurubberyCreationForm.hpp"
#include <fstream>

ShurubberyCreationForm::ShurubberyCreationForm() : _target("Default"), AForm("ShrubberyForm", 145, 137)
{
    std::cout << "ShrubberyForm created" << std::endl; 
}

ShurubberyCreationForm::ShurubberyCreationForm(const std::string &target) : _target(target), AForm("ShrubberyForm", 145, 137)
{
    std::cout << "ShrubberyForm created" << std::endl; 
}

ShurubberyCreationForm &ShurubberyCreationForm::operator=(const ShurubberyCreationForm &other)
{
    return (*this);
}

ShurubberyCreationForm::~ShurubberyCreationForm()
{
    std::cout << "ShrubberyForm destroyed" << std::endl;
}

void    ShurubberyCreationForm::execute(const Bureaucrat &Bureaucrat)
{
    std::string fileName = _target.append("_shrubbery").append(".txt");
    std::ofstream file;

    file.open(fileName);
    if (!file) {
        std::cerr << "Error: file couldn't be opened" << std::endl;
        exit(1);
    }
   file << "    oxoxoo    ooxoo" << std::endl;
   file << "   ooxoxo oo  oxoxooo" << std::endl;
   file << "oooo xxoxoo ooo ooox" << std::endl;
   file << "oxo o oxoxo  xoxxoxo" << std::endl;
   file << "   oxo xooxoooo o ooo" << std::endl;
   file << "    ooooo  /o/o" << std::endl;
   file <<     "      \\   /" << std::endl;
   file <<     "      |   /" << std::endl;
   file <<     "      |  |" << std::endl;
   file <<     "      | D|" << std::endl;
   file <<     "      |  |" << std::endl;
   file <<     "      |  |" << std::endl;
   file << "______/____\\____" << std::endl;
   file.close();
}

void    ShurubberyCreationForm::action() const {

}