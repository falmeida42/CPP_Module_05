#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShurubberyCreationForm.hpp"

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
        // Form form;
        // Form form2("Contrat", 1, 15);
        // Form form3(form2);
        // std::cout << form << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        // Form form30("Contract", 0, 150);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        // Form form40("Contract", 1, 151);
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
        // Form    f("Contract", 9, 8);

        // b.signForm(f);
        b.increment();
        // b.signForm(f);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


void    test3()
{
    #include "Bureaucrat.hpp"

	// Constructor with a bad grade
	// -49
	std::cout << std::endl;
	std::cout << "CONSTRUCTING WITH GRADE -49:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		Bureaucrat bill("Bill", -49);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// 256
	std::cout << std::endl;
	std::cout << "CONSTRUCTING WITH GRADE 256:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		Bureaucrat bill("Bill", 256);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// Normal increment/decrement and "<<" overload
	std::cout << std::endl;
	std::cout << "IN/DECREMENT + \"<<\" overload:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Bureaucrat bob("Bob", 1);
	try
	{
		bob.decrement();
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	// "<<" operator overload used
	std::cout << bob << std::endl;
	try
	{
		bob.increment();
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	// "<<" operator overload used
	std::cout << bob;
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// Increment 1 exception
	std::cout << std::endl;
	std::cout << "INCREMENT GRADE 1:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		bob.decrement();
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;
	//-------------------------------------------------------

	// Decrement 150 exception
	std::cout << std::endl;
	std::cout << "DECREMENT GRADE 150:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	try
	{
		bob.decrement();
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl << std::endl;

	//-------------------------------------------------------
	std::cout << std::endl;
	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;

}

void	test4()
{
	ShurubberyCreationForm();


}

int main()
{
    // test1();
    // test2();
    // test3();
	test4();
}