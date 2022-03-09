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
		std::string target;

	public:
		Form(void);
		Form(std::string input_name, int input_sign_grade, int input_exec_grade);
		Form(Form const & input_class);
		virtual ~Form(void);
		Form & operator=(Form const & input_class);

		std::string const getName(void) const;
		bool getIs_signed(void) const;
		int getSign_grade(void) const;
		int getExec_grade(void) const;

		void beSigned(Bureaucrat const & input_class);

		virtual void execute(Bureaucrat const & executor) const = 0;
		void setTarget(std::string const input_target);
		std::string const getTarget(void) const;

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
	
		class FormNotSignedException: public std::exception
   		{
    		public:
    	    	virtual const char* what() const throw()
            	{
                	return ("form not signed!");
            	}
    	};
};

std::ostream & operator<<(std::ostream & output, Form const & input_class);

#endif
