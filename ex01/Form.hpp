#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _isFormSigned;
        const int           _gradeRequiredToSign;
        const int           _gradeRequiredToExecute;

    public:
        Form();
        Form(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute);
        Form(const Form &other);
        Form &operator=(const Form &other);

        const std::string   getFormName(void);
        const bool                getFormStatus(void);
        const int           getGradeRequiredToSign(void);
        const int           getGradeRequiredToExecute(void);
        void                beSigned(Bureaucrat &bureaucrat);
        ~Form();

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Form::GradeTooHighException");
            }
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Form::GradeTooLowException");
            }
    };
};

std::ostream    &operator<<(std::ostream &os, Form &other);

#endif
