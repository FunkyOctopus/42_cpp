#include "easyfind.hpp"

int main(void)
{
	std::vector<int> ArrayContainer;
	for (int i = 0; i < 5; i++)
		ArrayContainer.push_back(i);

	try
	{
		std::cout << *easyfind(ArrayContainer, 4) << " found!" << std::endl;
		std::cout << *easyfind(ArrayContainer, 9999) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
