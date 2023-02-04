#include "Form.hpp"
#include <stdexcept>

Form::Form() : _name("Default Form"), _isFormSigned(false), _gradeRequiredToSign(149), _gradeRequiredToExecute(150)
{
    std::cout << "Form " << _name << " created. The grade required to Sign the form is " << _gradeRequiredToSign << ". The grade required to execute the form is " << _gradeRequiredToExecute << " The form status is " << getFormStatus() << std::endl;
}

Form::Form(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute) : _name(name), _isFormSigned(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw Form::GradeTooLowException();
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw Form::GradeTooHighException();

    std::cout << "Form " << _name << " created. The grade required to Sign the form is " << _gradeRequiredToSign << ". The grade required to execute the form is " << _gradeRequiredToExecute << " The form status is " << getFormStatus() << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _isFormSigned(false), _gradeRequiredToSign(other._gradeRequiredToSign), _gradeRequiredToExecute(other._gradeRequiredToExecute)
{
    std::cout << "Form " << _name << " created. The grade required to Sign the form is " << _gradeRequiredToSign << ". The grade required to execute the form is " << _gradeRequiredToExecute << " The form status is " << getFormStatus() << std::endl;
}

Form &Form::operator=(const Form &other)
{
    return (*this);
}

const std::string Form::getFormName(void) { return (_name); }

const int Form::getGradeRequiredToSign(void) { return (_gradeRequiredToSign); }

const int Form::getGradeRequiredToExecute(void) { return (_gradeRequiredToExecute); }

const std::string Form::getFormStatus(void) { return (_isFormSigned == 0 ? "not Signed" : "Signed"); }

Form::~Form()
{
    std::cout << "Form " << _name << " Destroyed" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Form &other)
{
    os << "Form " << other.getFormName() << " created. The grade required to Sign the form is "
       << other.getGradeRequiredToSign() << ". The grade required to execute the form is " << other.getGradeRequiredToExecute() << " The form status is " << other.getFormStatus();

    return os;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeRequiredToSign())
        this->_isFormSigned = true;
    else
        throw Form::GradeTooLowException();
}