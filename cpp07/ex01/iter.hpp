#include <iostream>

template<typename T>
void	printer(T array)
{
	std::cout << array << std::endl;
}

// template<typename T>
// void doubler(T x)
// {
// 	x *= 2;
// }

template<typename T>
void	iter(T *array, int length, void(*func)(T const & input))
{
	int i = 0;

	while (i < length)
	{
		func(array[i]);
		i++;
	}
}
