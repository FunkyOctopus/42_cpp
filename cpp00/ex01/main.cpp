#include "phonebook.hpp"
#include "contacts.hpp"

int	main(void)
{
	std::string input;
	phonebook 	phonebook;
	int			i = 0;

	std::cout << "Enter ADD, SEARCH or EXIT to use the program" << std::endl;
	while(1)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i == 8)
				i = 0;
			phonebook.add(i);
			i++;
		}
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return (-1);
		else
			std::cout << "Enter ADD, SEARCH or EXIT to use the program" << std::endl;
	}
	return (0);
}
