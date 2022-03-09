#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("UNKNOWN"), grade(1) {}

Bureaucrat::Bureaucrat(std::string input_name, int input_grade) : name(input_name)
{
	if (input_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (input_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade = input_grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & input_class)
{
	*this = input_class;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & input_class)
{
	grade = input_class.grade;
	return (*this);
}

std::string const Bureaucrat::getName(void) const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

void Bureaucrat::incrementGrade(void)
{
	grade -= 1;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	grade += 1;

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form & input_class)
{
	try
	{
		input_class.beSigned(*this);
		std::cout << name << " signed " << input_class.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << name << " couldn’t sign " << input_class.getName() << 
		" because ";	
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream & operator<<(std::ostream & output, Bureaucrat const & input_class)
{
	output << input_class.getName() << ", bureaucrat grade " << input_class.getGrade();
	return (output);
}
