#ifndef SHURUBBERYCREATIONFORM_H
#define SHURUBBERYCREATIONFORM_H
#include "Form.hpp"

class ShurubberyCreationForm : public AForm
{
    private:
        std::string _target;
        void    action() const override;
    public:
        ShurubberyCreationForm();
        ShurubberyCreationForm(const std::string &target);
        ShurubberyCreationForm(const ShurubberyCreationForm &other);
        ShurubberyCreationForm &operator=(const ShurubberyCreationForm &other);
        virtual ~ShurubberyCreationForm();

};

#endif