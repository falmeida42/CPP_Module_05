#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat()
{
    this->_name = "Simple Bureaucrat";
    this->_grade = 150;

    std::cout << "Bureaucrat name " << _name << " grade " << _grade << " was successful created" << std::endl; 
}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    
    this->_name = name;
    this->_grade = grade;
    std::cout << "Bureaucrat name " << _name << " grade " << _grade << " was successful created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    this->_name = bureaucrat._name;
    this->_grade = bureaucrat._grade;
    std::cout << "Bureaucrat name " << _name << " grade " << _grade << " was successful created" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_grade = other._grade;
    }
    std::cout << "Bureaucrat name " << _name << " grade " << _grade << " was successful created" << std::endl;
    return (*this);
}

std::string Bureaucrat::getName(void) const { return (this->_name); }

int Bureaucrat::getGrade(void) const { return (this->_grade); }

void    Bureaucrat::increment(void)
{
    if (this->_grade == 1)
    {
        std::cout << "This bureaucrat cannot be incremented" << std::endl;
        return ;
    }
    _grade--;
    std::cout << "The bureaucrat " << this->_name << " was lowered to level " << this->_grade << std::endl;
}

void    Bureaucrat::decrement(void)
{
    if (this->_grade == 150)
    {
        std::cout << "This bureaucrat cannot be decremented" << std::endl;
        return ;
    }
    _grade++;
    std::cout << "The bureaucrat " << this->_name << " was promoted to level " << this->_grade << std::endl;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const &other)
{
    os << other.getName() << ", bureaucrat grade " << other.getGrade();

    return os;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed" << std::endl;
}

void    Bureaucrat::signForm(Form &form)
{
   try
   {
     form.beSigned(*this);
     std::cout << _name << " signed " << form.getFormName() << std::endl;
   }
   catch (std::exception &e)
   {
        std::cout << _name << " couldn't sign " << form.getFormName() << " because the grade is to low" << std::endl;
   }
}