#ifndef ROBOTOMYRQUESTFORM_H
#define ROBOTOMYRQUESTFORM_H
#include "Form.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        virtual ~RobotomyRequestForm();
        void    execute(const Bureaucrat &Bureaucrat);

        void    action() const override;
};

#endif