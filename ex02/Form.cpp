#include "Form.hpp"
#include <stdexcept>

AForm::AForm() : _name("Default AForm"), _isFormSigned(false), _gradeRequiredToSign(149), _gradeRequiredToExecute(150)
{
    std::cout << "AForm " << _name << " created. The grade required to Sign the form is " << _gradeRequiredToSign << ". The grade required to execute the form is " << _gradeRequiredToExecute << " The form status is " << _isFormSigned << std::endl;
}

AForm::AForm(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute) : _name(name), _isFormSigned(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw AForm::GradeTooLowException();
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw AForm::GradeTooHighException();

    std::cout << "AForm " << _name << " created. The grade required to Sign the form is " << _gradeRequiredToSign << ". The grade required to execute the form is " << _gradeRequiredToExecute << " The form status is " << _isFormSigned << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _isFormSigned(false), _gradeRequiredToSign(other._gradeRequiredToSign), _gradeRequiredToExecute(other._gradeRequiredToExecute)
{
    std::cout << "AForm " << _name << " created. The grade required to Sign the form is " << _gradeRequiredToSign << ". The grade required to execute the form is " << _gradeRequiredToExecute << " The form status is " << _isFormSigned << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    return (*this);
}

const std::string AForm::getFormName(void) const { return (_name); }

int AForm::getGradeRequiredToSign(void) const { return (_gradeRequiredToSign); }

int AForm::getGradeRequiredToExecute(void) const { return (_gradeRequiredToExecute); }

const bool AForm::getFormStatus(void) { return (_isFormSigned); }

AForm::~AForm()
{
    std::cout << "AForm " << _name << " Destroyed" << std::endl;
}

std::ostream &operator<<(std::ostream &os, AForm &other)
{
    os << "AForm " << other.getFormName() << " created. The grade required to Sign the form is "
       << other.getGradeRequiredToSign() << ". The grade required to execute the form is " << other.getGradeRequiredToExecute() << " The form status is " << other.getFormStatus();

    return os;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeRequiredToSign)
        _isFormSigned = true;
    else
        throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeRequiredToExecute())
        throw Bureaucrat::GradeTooLowException();
    action();
}