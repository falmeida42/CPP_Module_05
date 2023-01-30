#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _target("Default"), AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm target " << _target << " created" << std::endl; 
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : _target(target), AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm target " << _target << " created" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : _target(other._target), AForm(other.getFormName(), other.getGradeRequiredToSign(), other.getGradeRequiredToExecute())
{
    std::cout << "RobotomyRequestForm target " << _target << " created" << std::endl; 
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    return (*this);
}

void    RobotomyRequestForm::action() const {

}