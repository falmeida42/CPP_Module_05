#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    _target = "Default";
    std::cout << "PresidentialPardonForm " << _target << " created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : _target(target), AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm " << _target << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : _target(other._target), AForm(other.getFormName(), other.getGradeRequiredToSign(), other.getGradeRequiredToExecute())
{
    std::cout << "PresidentialPardonForm " << _target << " created" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    return (*this);
}

void    PresidentialPardonForm::action() const 
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}