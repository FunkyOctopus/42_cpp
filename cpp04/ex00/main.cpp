#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Constructors" << std::endl;
	const Animal* meta = new Animal(); 
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl << "getType()" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	
	std::cout << std::endl << "makeSound()" << std::endl;
	meta->makeSound(); 
	i->makeSound();
	j->makeSound();
	k->makeSound();

	std::cout << std::endl << "Deconstructors" << std::endl;
	delete meta;
	delete i;
	delete j;
	delete k;

	return (0); 
}
