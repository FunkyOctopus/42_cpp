#include "Array.hpp"

int	main(void)
{
	Array<int> Int;
	Array<int> Int2(5);

	Int2[4] = 42;

	std::cout << "Length: " << Int.size() << std::endl;
	std::cout << "Length: " << Int2.size() << std::endl;
	std::cout << Int2[4] << std::endl;



	Array<char> Char(1);

	Char[0] = 'a';

	std::cout << Char[0] << std::endl;



	Array<std::string> String(5);

	try
	{
		String[5] = "Doesn't Work";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	String[4] = "Works";
	std::cout << String[4] << std::endl;



    Array<int> *heap = new Array<int>(1);

    (*heap)[0] = 9;
    std::cout << heap->size() << std::endl;
    std::cout << (*heap)[0] << std::endl;
   
    delete heap;



	return (0);
}
