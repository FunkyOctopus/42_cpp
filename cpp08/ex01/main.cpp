#include "Span.hpp"

int main(void) 
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	Span MassiveSpan = Span(500);
	MassiveSpan.addManyNumbers(42, 500);
	MassiveSpan.printEverything();

	std::cout << std::endl;

	try
	{
		MassiveSpan.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	return 0; 
}
