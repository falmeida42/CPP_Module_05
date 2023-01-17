#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    _target = "default";
    std::cout << "PresidentialPardonForm created" << std::endl; 
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destroyed" << std::endl;
}


const std::string   PresidentialPardonForm::getFormName(void) { return(AForm::getFormName()); }

const bool                PresidentialPardonForm::getFormStatus(void) { return(AForm::getFormStatus()); }

const int           PresidentialPardonForm::getGradeRequiredToSign(void) { return(AForm::getGradeRequiredToSign()); }

const int           PresidentialPardonForm::getGradeRequiredToExecute(void) { return(AForm::getGradeRequiredToExecute()); }

void                PresidentialPardonForm::beSigned(Bureaucrat &bureaucrat) { return(AForm::beSigned(bureaucrat)); }