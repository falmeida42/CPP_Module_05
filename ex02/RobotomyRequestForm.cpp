#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    _target = "default";
    std::cout << "RobotomyRequestForm created" << std::endl; 
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destroyed" << std::endl;
}


const std::string   RobotomyRequestForm::getFormName(void) { return(AForm::getFormName()); }

const bool                RobotomyRequestForm::getFormStatus(void) { return(AForm::getFormStatus()); }

const int           RobotomyRequestForm::getGradeRequiredToSign(void) { return(AForm::getGradeRequiredToSign()); }

const int           RobotomyRequestForm::getGradeRequiredToExecute(void) { return(AForm::getGradeRequiredToExecute()); }

void                RobotomyRequestForm::beSigned(Bureaucrat &bureaucrat) { return(AForm::beSigned(bureaucrat)); }