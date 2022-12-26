#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>


class Bureaucrat
{
    
    private:
        std::string _name;
        int         _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, const int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat &operator=(const Bureaucrat& other);
        const std::string getName(void);
        const int getGrade(void);
        void    increment(void);
        void    decrement(void);
        ~Bureaucrat();
};

#endif