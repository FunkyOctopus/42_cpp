#include "phonebook.hpp"

phonebook::phonebook(void) : counter(0)
{
}

phonebook::~phonebook(void)
{
}

void	phonebook::add(int i)
{
	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string	darkest_secret;
	if (this->counter != 8)
		this->counter += 1;

	std::cout << "first name: ";
	std::getline(std::cin, first_name);
	std::cout << "last name: ";
	std::getline(std::cin, last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret);
	std::cout << "> successfully added new contact <" << std::endl;
	this->contact[i].set(first_name, last_name, nickname, phone_number, darkest_secret);
}

void	phonebook::search()
{
	int 		index = 0;

	std::cout << "---------------------------------------------" <<std::endl;
	std::cout << "|     index|first name| last name| nickname |" <<std::endl;
	std::cout << "---------------------------------------------" <<std::endl;
	while (index < this->counter)
	{
		this->contact[index].get(index);
		index++;
	}
	std::cout << "---------------------------------------------" <<std::endl;
	std::cout << "Enter the index of the contact you want to see the info of: ";
	while(!(std::cin >> index) || (index < 0 || index >= this->counter))
	{
		std::cout << "Please enter a valid index: ";
		std::cin.clear();
		std::cin.ignore(512, '\n');
	}
	this->contact[index].get_full();
}
