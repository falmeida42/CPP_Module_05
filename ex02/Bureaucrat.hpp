#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "Form.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string _name;
        int         _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat &operator=(const Bureaucrat& other);
        std::string getName(void) const;
        int getGrade(void) const;
        void    increment(void);
        void    decrement(void);
        void    signForm(AForm &form);
        void    executeForm(AForm const & form);
        ~Bureaucrat();
    
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Bureaucrat::GradeTooHighException");
            }
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Bureaucrat::GradeTooLowException");
            }
    };
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &other);

#endif