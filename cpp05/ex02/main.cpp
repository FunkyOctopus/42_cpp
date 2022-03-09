#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Bureaucrat("Bureacrat", 15);
		PresidentialPardonForm President("President");

		President.beSigned(Bureaucrat);
		Bureaucrat.executeForm(President);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl;


	try
	{
		Bureaucrat Bureaucrat2("Bureacrat2", 71);
		RobotomyRequestForm Robot("Robot");

		Robot.beSigned(Bureaucrat2);
		Bureaucrat2.executeForm(Robot);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl;


	try
	{
		Bureaucrat Bureaucrat3("Bureacrat3", 137);
		ShrubberyCreationForm Shrubbery("Shrubbery");

		Shrubbery.beSigned(Bureaucrat3);
		Bureaucrat3.executeForm(Shrubbery);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	return (0);
}
