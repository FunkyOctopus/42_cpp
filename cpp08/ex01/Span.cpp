#include "Span.hpp"

Span::Span(void) : N() { }

Span::Span(unsigned int N) : N(N) { }

Span::Span(Span const & input_class)
{
	N = input_class.N;
	ArrayContainer = input_class.ArrayContainer;
}

Span::~Span(void) { }

Span & Span::operator=(Span const & input_class)
{
	N = input_class.N;
	ArrayContainer = input_class.ArrayContainer;
	return (*this);
}

void Span::addNumber(int add)
{
	if (ArrayContainer.size() >= N)
		throw AlreadyNException();
	else
		ArrayContainer.push_back(add);
}

void Span::addManyNumbers(int add, int range)
{
	if (ArrayContainer.size() >= N)
		throw AlreadyNException();
	else
	{
		for (int i = 0; i < range; i++)
		{
			addNumber(add++);
		}
	}
}

int Span::shortestSpan(void)
{
	std::vector<int>::iterator Begin = ArrayContainer.begin();
	std::vector<int>::iterator End = ArrayContainer.end();

	int size = ArrayContainer.size();
	int	difference = 2147483647;
	int	temp = 0;

	if (size <= 1)
		throw OneOrNoneException();
	else
	{
		for (int i = 0; Begin != End; ++Begin, ++i)
		{
			if (i < size - 1)
				temp = abs(*Begin - *(Begin + 1));
			if (temp < difference)
				difference = temp;
		}
		return (difference);
	}
}

int Span::longestSpan(void)
{
	std::vector<int>::iterator Begin = ArrayContainer.begin();
	std::vector<int>::iterator End = ArrayContainer.end();

	int size = ArrayContainer.size();
	int	difference = -2147483648;
	int	temp = 0;

	if (size <= 1)
		throw OneOrNoneException();
	else
	{
		for (int i = 0; Begin != End; ++Begin, ++i)
		{
			if (i < size - 1)
				temp = abs(*Begin - *(Begin + 1));
			if (temp > difference)
				difference = temp;
		}
		return (difference);
	}
}

void	Span::printEverything(void)
{
	std::vector<int>::iterator Begin = ArrayContainer.begin();
	std::vector<int>::iterator End = ArrayContainer.end();
	
	for (; Begin != End; ++Begin)
	{
		std::cout << *Begin << " ";
	}
	std::cout << std::endl;
}
