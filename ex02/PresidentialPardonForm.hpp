#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
    private:
    std::string _target;
    public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    void    execute(const Bureaucrat &Bureaucrat);

    const std::string   getFormName(void);
    const bool                getFormStatus(void) override;
    const int           getGradeRequiredToSign(void) override;
    const int           getGradeRequiredToExecute(void) override;
    void                beSigned(Bureaucrat &bureaucrat) override;
};

#endif