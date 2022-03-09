#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <iostream>
# include <vector>

class ExceptionClass: public std::exception
   		{
    		public:
    	    	virtual const char* what() const throw()
           		{
                	return ("Can't find this one!");
            	}
    	};


template<typename T>
typename T::iterator easyfind(T container, int first_occurence)
{
	typename T::iterator result;
	
	result = find(container.begin(), container.end(), first_occurence);

	if (result == container.end())
		throw ExceptionClass();
	return (result);
}

# endif
