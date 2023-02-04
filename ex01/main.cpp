#include "Bureaucrat.hpp"
#include "Form.hpp"


#include "Form.hpp"

void	testNums(unsigned int a, unsigned int b) {
	try {
		Form form("Login", a, b);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	testSignature(Bureaucrat& b, Form& form) {
	
	std::cout << b.getName() << " grade " << b.getGrade() << std::endl;
	std::cout << form.getFormName() << " signature grade " << form.getGradeRequiredToSign() << std::endl;

	try {
		form.beSigned(b);
		std::cout << "Signed!" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	Form form;
	/**
	 * Getters
	 */
	std::cout << "name " << form.getFormName() << std::endl;
	std::cout << "is signed " << form.getFormStatus() << std::endl;
	std::cout << "sign grade " << form.getGradeRequiredToSign() << std::endl;
	std::cout << "exec grade " << form.getGradeRequiredToExecute() << std::endl;
	/**
	 * Construction tests
	 */
	Form form2("Blue", 13, 9);
	Form form3(form);
	std::cout << std::endl;

	/**
	 * operator<< and operator=
	 */
	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	form3 = form2;
	std::cout << form3 << std::endl;
	std::cout << std::endl;
	
	/**
	 * Invalid numbers
	 */
	std::cout << "\n/**Invalid numbers**\\" << std::endl;
	testNums(0, 1);
	testNums(1, 0);
	testNums(151, 1);
	testNums(1, 151);

	std::cout << std::endl;
	Bureaucrat	ez("Ezequiel", 13);
	Bureaucrat	rf("Rafael", 1);

	std::cout << "\n/**Bureaucrat::signForm()**\\" << std::endl;
	/**
	 * Bureaucrat::signForm && Form::beSigned
	 */
	ez.signForm(form);
	rf.signForm(form);

	std::cout << "\n/**Form::beSigned()**\\" << std::endl;
	testSignature(ez, form3);
	testSignature(rf, form3);

}