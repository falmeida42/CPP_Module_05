#include "Bureaucrat.hpp"
#include "Form.hpp"

void    test1()
{
    try
    {
        Bureaucrat bureaurat;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form form;
        Form form2("Contrat", 1, 15);
        Form form3(form2);
        std::cout << form << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Form form30("Contract", 0, 150);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Form form40("Contract", 1, 151);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    test2()
{
    try
    {
        Bureaucrat b("Ezequiel", 10);
        Form    f("Contract", 9, 8);

        b.signForm(f);
        b.increment();
        b.signForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


int main()
{
    // test1();
    test2();
}