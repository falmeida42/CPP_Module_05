#include "Bureaucrat.hpp"

void    test1()
{
    try
    {
        Bureaucrat bureaurat("Ezequiel", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    test2()
{
    try
    {
        Bureaucrat bureaurat("Ezequiel", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    test3()
{
    try
    {
        Bureaucrat bureaurat("Ezequiel", 42);
        std::cout << bureaurat.getName() << " " << bureaurat.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

void    test4()
{
    try
    {
        Bureaucrat bureaurat("Ezequiel", 3);
        std::cout << bureaurat.getName() << " " << bureaurat.getGrade() << std::endl;
        bureaurat.increment();
        bureaurat.increment();
        bureaurat.increment();
        bureaurat.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

void    test5()
{
    try
    {
        Bureaucrat bureaurat("Ezequiel", 147);
        std::cout << bureaurat.getName() << " " << bureaurat.getGrade() << std::endl;
        bureaurat.decrement();
        bureaurat.decrement();
        bureaurat.decrement();
        bureaurat.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

void    test6()
{
    try
    {
        Bureaucrat bureaurat("Ezequiel", 147);
        Bureaucrat bureaurat2(bureaurat);
        std::cout << bureaurat.getName() << " " << bureaurat.getGrade() << std::endl;
        bureaurat.decrement();
        bureaurat.decrement();
        bureaurat.decrement();
        bureaurat.decrement();

        std::cout << bureaurat2.getName() << " " << bureaurat2.getGrade() << std::endl;
        bureaurat2.decrement();
        bureaurat2.decrement();
        bureaurat2.decrement();
        bureaurat2.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

void    test7()
{
    try
    {
        Bureaucrat bureaurat("Ezequiel", 147);
        Bureaucrat bureaurat2 = bureaurat;
        std::cout << bureaurat.getName() << " " << bureaurat.getGrade() << std::endl;
        bureaurat.decrement();
        bureaurat.decrement();
        bureaurat.decrement();
        bureaurat.decrement();

        std::cout << bureaurat2.getName() << " " << bureaurat2.getGrade() << std::endl;
        bureaurat2.decrement();
        bureaurat2.decrement();
        bureaurat2.decrement();
        bureaurat2.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();

}