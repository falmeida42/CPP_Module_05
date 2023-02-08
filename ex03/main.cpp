#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
    Intern  someRandomIntern;
    Bureaucrat  hal("HAL2000", 80);
    Bureaucrat  greta("Greta", 150);
    Bureaucrat  zaphod("Zaphod", 30);

    AForm*   rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm*   scf = someRandomIntern.makeForm("shrubbery request", "Root");
    AForm*   ppr = someRandomIntern.makeForm("presidential request", "NOXIN");

    hal.signForm(*rrf);
    hal.executeForm(*rrf);
    greta.signForm(*scf);
    greta.executeForm(*scf);
    zaphod.signForm(*ppr);
    zaphod.executeForm(*ppr);

    delete rrf;
    delete scf;
    delete ppr;
}