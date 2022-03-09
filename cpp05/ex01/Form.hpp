#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const name;
		bool is_signed;
		int const sign_grade;
		int const exec_grade;

	public:
		Form(void);
		Form(std::string input_name, int input_sign_grade, int input_exec_grade);
		Form(Form const & input_class);
		~Form(void);
		Form & operator=(Form const & input_class);

		std::string const getName(void) const;
		bool getIs_signed(void) const;
		int getSign_grade(void) const;
		int getExec_grade(void) const;

		void beSigned(Bureaucrat const & input_class);

		class GradeTooLowException: public std::exception
    	{
    		public:
				virtual const char* what() const throw()
				{
					return ("grade too low!");
				}
		};

		class GradeTooHighException: public std::exception
   		{
    		public:
    	    	virtual const char* what() const throw()
            	{
                	return ("grade too high!");
            	}
    	};
};

std::ostream & operator<<(std::ostream & output, Form const & input_class);

#endif
