#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
        void    action() const override;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& other);
        virtual ~PresidentialPardonForm();
        
};

#endif