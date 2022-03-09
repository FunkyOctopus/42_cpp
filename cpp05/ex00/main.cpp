#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat one("one", 1);

	std::cout << one.getGrade() << std::endl;
	std::cout << one.getName() << std::endl;

	try
	{
		one.incrementGrade();
	}

	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	Bureaucrat two("two", 150);

	std::cout << std::endl << two.getGrade() << std::endl;
	std::cout << two.getName() << std::endl;

	try
	{
		two.decrementGrade();
	}

	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
