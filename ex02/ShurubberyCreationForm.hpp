#ifndef SHURUBBERYCREATIONFORM_H
#define SHURUBBERYCREATIONFORM_H
#include "Form.hpp"

class ShurubberyCreationForm : public AForm
{
    private:
    std::string _target;
    public:
    ShurubberyCreationForm();
    ShurubberyCreationForm(const std::string &target);
    ~ShurubberyCreationForm();
    void    execute(const Bureaucrat &Bureaucrat);

    const std::string   getFormName(void);
    const bool                getFormStatus(void) override;
    const int           getGradeRequiredToSign(void) override;
    const int           getGradeRequiredToExecute(void) override;
    void                beSigned(Bureaucrat &bureaucrat) override;
};

#endif