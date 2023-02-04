#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	ez("Ezequiel", 2);
	Bureaucrat	rf("Rafael", 149);
	Bureaucrat	b;

	std::cout << std::endl;

	std::cout << ez << std::endl;
	ez.increment();
    std::cout << ez << std::endl;
	std::cout << rf << std::endl;
	rf.decrement();
    std::cout << rf << std::endl;
	std::cout << b << std::endl;
	std::cout << "Hello" << (b = rf) << std::endl;

	std::cout << std::endl;

	try {
		ez.increment();
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		rf.decrement();
	} catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat	b1("Inácio", -1);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("Kevin", 75);
		Bureaucrat b2 = b1;
		std::cout << b1 << std::endl;
		Bureaucrat b3;
		std::cout << b3.getName() << std::endl;
		std::cout << b3.getGrade() << std::endl;
		b3 = b2;
		std::cout << b3 << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat b3("Karina", 199);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}