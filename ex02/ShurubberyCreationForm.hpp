#ifndef SHURUBBERYCREATIONFORM_H
#define SHURUBBERYCREATIONFORM_H
#include "Form.hpp"

class ShurubberyCreationForm : public AForm
{
    private:
    std::string _target;
    public:
    ShurubberyCreationForm();
    ~ShurubberyCreationForm();
    void    execute(const Bureaucrat &Bureaucrat);
};

#endif