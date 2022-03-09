#include "iter.hpp"

int	main(void)
{
	char array1[] = { 'a', 'b', 'c', 'd', 'e' };
	int array2[] = { 1, 2, 3, 4, 5 };

	iter(array1, 5, printer);
	std::cout << std::endl;
	// iter(array2, 5, doubler);
	iter(array2, 5, printer);

	return (0);
}
