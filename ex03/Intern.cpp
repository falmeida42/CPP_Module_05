#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>
#include <utility>

Intern::Intern()
{
    std::cout << "Intern created" << std::endl;

}

Intern::~Intern()
{
    std::cout << "Intern destroyed" << std::endl;
}

AForm    *Intern::makeShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm    *Intern::makeForm(std::string formName, std::string target)
{

    formRequests[0].func = makeShrubbery;
    
}