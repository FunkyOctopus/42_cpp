#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong input" << std::endl;
		return (-1);
	}

	class Convert Convert;

	Convert.inputHandler(argv[1]);

	return (0);
}
