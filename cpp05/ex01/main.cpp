#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat b("one", 100);
		Form f("two", 101, 50);

		//f.beSigned(b);
		b.signForm(f);
	}

	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
