#include "Character.hpp"

Character::Character(void)
{
	//std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(std::string name) : name(name)
{
	//std::cout << "Character Parameterized Constructor Called" << std::endl;
}

Character::Character(Character const & input_class)
{
	//std::cout << "Character Copy Constructor called" << std::endl;
	*this = input_class;
}

Character::~Character(void)
{
	//std::cout << "Character Deconstructor called" << std::endl;
	int i = 0;

	while (i < 4)
	{
		delete Inventory[i];
		i++;
	}
}

Character & Character::operator=(Character const & input_class)
{
	int i = 0;

	while (i < 4)
	{
		Inventory[i] = input_class.Inventory[i];
		i++;
	}
	name = input_class.name;
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (!Inventory[i])
		{
			Inventory[i] = m;
			break ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (Inventory[idx])
		Inventory[idx] = 0;
}

void Character::use(int idx, ICharacter & target)
{
	if (Inventory[idx])
		Inventory[idx]->use(target);
}
