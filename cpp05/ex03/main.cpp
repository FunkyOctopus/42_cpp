#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Intern Intern1;
	Intern1.makeForm("presidential pardon", "president");
	std::cout << std::endl;


	Intern Intern2;
	Intern2.makeForm("robotomy request", "robot");
	std::cout << std::endl;


	Intern Intern3;
	Intern3.makeForm("shrubbery creation", "shrubbery");
	std::cout << std::endl;


    Intern  Intern4;
	try
	{
		Intern4.makeForm("doesnt exist", "error");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}
