#ifndef CONTACTS_H
# define CONTACTS_H

# include <iostream>
# include <iomanip>

class contact
{
	private:
		std::string	first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string	darkest_secret;

	public:
		contact(void);
		~contact(void);

		void	get(int index);
		void	get_full(void);
		void	set(std::string	first_name, std::string last_name, std::string nickname, std::string phone_number, std::string	darkest_secret);
};

#endif
