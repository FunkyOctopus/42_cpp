#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern
{
	private:

	public:
		Intern(void);
		Intern(Intern const & input_class);
		virtual ~Intern(void);
		Intern & operator=(Intern const & input_class);

		Form * makeForm(std::string form_name, std::string form_target);
		void	deleteFunction(Form *form_creation[3], int i);

		class FormDoesntExistException: public std::exception
   		{
    		public:
    	    	virtual const char* what() const throw()
            	{
                	return ("Form doesn’t exist!");
            	}
    	};
};

#endif
