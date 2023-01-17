#ifndef ROBOTOMYRQUESTFORM_H
#define ROBOTOMYRQUESTFORM_H
#include "Form.hpp"

class RobotomyRequestForm : public AForm
{
    private:
    std::string _target;
    public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    void    execute(const Bureaucrat &Bureaucrat);

    const std::string   getFormName(void);
    const bool                getFormStatus(void) override;
    const int           getGradeRequiredToSign(void) override;
    const int           getGradeRequiredToExecute(void) override;
    void                beSigned(Bureaucrat &bureaucrat) override;
};

#endif