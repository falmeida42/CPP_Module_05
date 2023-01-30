#ifndef FORM_H
#define FORM_H
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        bool                _isFormSigned;
        const int           _gradeRequiredToSign;
        const int           _gradeRequiredToExecute;

    public:
        AForm();
        AForm(std::string name, int gradeRequiredToSign, int gradeRequiredToExecute);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);

        const std::string   getFormName(void) const;
        const bool                getFormStatus(void);
        int           getGradeRequiredToSign(void) const;
        int           getGradeRequiredToExecute(void) const;
        void                beSigned(Bureaucrat &bureaucrat);
        virtual void                action() const = 0;
        ~AForm();

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

std::ostream    &operator<<(std::ostream &os, AForm &other);

#endif
