#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

class Bureaucrat
{
	private:
		std::string const name;
		int	grade;

	public:
	Bureaucrat(void);
	Bureaucrat(std::string input_name, int input_grade);
	Bureaucrat(Bureaucrat const & input_class);
	~Bureaucrat(void);
	Bureaucrat & operator=(Bureaucrat const & input_class);

	std::string const getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);


	class GradeTooLowException: public std::exception
    {
    	public:
    	    virtual const char* what() const throw()
            {
                return ("Grade too low!");
            }
    };

	class GradeTooHighException: public std::exception
    {
    	public:
    	    virtual const char* what() const throw()
            {
                return ("Grade too high!");
            }
    };
};

std::ostream & operator<<( std::ostream & output, Bureaucrat const & input_class );

#endif
