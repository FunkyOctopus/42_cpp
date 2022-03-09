#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "contacts.hpp"

class phonebook
{
private:
	int	counter;

public:
	phonebook(void);
	~phonebook(void);

	contact contact[8];

	void	add(int i);
	void	search(void);
};

#endif
