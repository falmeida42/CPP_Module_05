#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>
#include <utility>

Intern::Intern()
{
    formRequests[0].formName = "shrubbery request";
    formRequests[0].func = makeShrubbery;
    formRequests[1].formName = "presidential request";
    formRequests[1].func = makePresidentialPardon;
    formRequests[2].formName = "robotomy request";
    formRequests[2].func = makeRobotomy;
    std::cout << "Intern created" << std::endl;

}


Intern::Intern(const Intern& other) {
    (void)other;
    formRequests[0].formName = "shrubbery request";
    formRequests[0].func = makeShrubbery;
    formRequests[1].formName = "presidential request";
    formRequests[1].func = makePresidentialPardon;
    formRequests[2].formName = "robotomy request";
    formRequests[2].func = makeRobotomy;
    std::cout << "Intern copy created" << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
	return *this;
}


Intern::~Intern()
{
    std::cout << "Intern destroyed" << std::endl;
}

AForm    *Intern::makeShrubbery(const std::string target)
{
    std::cout << "Intern creates Shurubbery Form" << std::endl;
    return (new ShrubberyCreationForm(target));
}

AForm   *Intern::makePresidentialPardon(const std::string target)
{
    std::cout << "Intern creates Presidential Pardon Form" << std::endl;
    return (new PresidentialPardonForm(target));
}

AForm   *Intern::makeRobotomy(const std::string target)
{
    std::cout << "Intern creates Robotomy Form" << std::endl;
    return (new RobotomyRequestForm(target));
}

AForm    *Intern::makeForm(std::string formName, std::string target)
{

    for (int i = 0; i < 3; i++) {
        if (this->formRequests[i].formName.compare(formName) == 0)
        {
            return (this->formRequests[i].func(target));
        }
    }
    std::cout << "Form not found" << std::endl;
    return nullptr;   
}