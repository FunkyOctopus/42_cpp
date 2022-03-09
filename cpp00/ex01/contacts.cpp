#include "contacts.hpp"

contact::contact(void)
{
}

contact::~contact(void)
{
}


void	contact::get(int index)
{
	std::cout << "|";
	std::cout << std::setw(10) << index << "|";
	if (this->first_name.length() > 10)
	{
		this->first_name.resize(10);
		this->first_name[9] = '.';
	}
	std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
	{
		this->last_name.resize(10);
		this->last_name[9] = '.';
	}
	std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
	{
		this->nickname.resize(10);
		this->nickname[9] = '.';
	}
	std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}

void	contact::get_full(void)
{
	std::cout << std::endl << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl << std::endl;
}

void	contact::set(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string	darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}
