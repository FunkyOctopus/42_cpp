#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./karenFilter <complaint>" << std::endl;
		return (-1);
	}
	
	Karen karen;
	karen.complain(argv[1]);

	return (0);
}
