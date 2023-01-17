#include "ShurubberyCreationForm.hpp"
#include <fstream>

ShurubberyCreationForm::ShurubberyCreationForm() : AForm("ShrubberyForm", 145, 137)
{
    _target = "default";
    std::cout << "ShrubberyForm created" << std::endl; 
}

ShurubberyCreationForm::ShurubberyCreationForm(const std::string &target) : AForm("ShrubberyForm", 145, 137)
{
    _target = target;
    std::cout << "ShrubberyForm created" << std::endl; 
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

const std::string   ShurubberyCreationForm::getFormName(void) { return(AForm::getFormName()); }

const bool                ShurubberyCreationForm::getFormStatus(void) { return(AForm::getFormStatus()); }

const int           ShurubberyCreationForm::getGradeRequiredToSign(void) { return(AForm::getGradeRequiredToSign()); }

const int           ShurubberyCreationForm::getGradeRequiredToExecute(void) { return(AForm::getGradeRequiredToExecute()); }

void                ShurubberyCreationForm::beSigned(Bureaucrat &bureaucrat) { return(AForm::beSigned(bureaucrat)); }