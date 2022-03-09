#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	std::cout << "Constructors" << std::endl;
	Animal *animals[10];
	int i = 0;

	while (i < 5)
	{
		animals[i] = new Dog();
		i++;
	}
	while (i < 10)
	{
		animals[i] = new Cat();
		i++;
	}

	const Animal* a = new Dog();
	const Animal* b = new Cat();

	Dog dog;
	Dog deepCopy = dog;

	std::cout << std::endl;


	std::cout << "DeepCopy" << std::endl;
	std::cout << dog.getBrain() << std::endl;
	std::cout << deepCopy.getBrain() << std::endl;


	std::cout << std::endl << "Deconstructors" << std::endl;
	i = 0;

	while (i < 10)
	{
		delete animals[i];
		i++;
	}

	delete a;
	delete b;


	std::cout << std::endl << "System(leaks)" << std::endl;
	system("leaks Brain");

	return (0); 
}
