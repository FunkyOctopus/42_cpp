#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const & input_class) 
{
	*this = input_class;
}

Intern::~Intern(void) {}

Intern & Intern::operator=(Intern const & input_class)
{
	(void)input_class;
	return (*this);
}

Form * Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string form_names[3] = 
	{ 
		"presidential pardon", 
		"robotomy request", 
		"shrubbery creation"
	};

	Form *form_creation[3] =
	{ 
		new PresidentialPardonForm(form_target),
		new RobotomyRequestForm(form_target),
		new ShrubberyCreationForm(form_target),
	};

	int i = 0;

	while (i < (int)(sizeof(form_names) / sizeof(std::string)))
	{
		if (form_name == form_names[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			deleteFunction(form_creation, i);
			return(form_creation[i]);
		}
		i++;
	}
	deleteFunction(form_creation, -1);
	throw Intern::FormDoesntExistException();
}

void	Intern::deleteFunction(Form *form_creation[3], int i)
{
	int j = 0;

	while (j < 3)
	{
		if (j != i)
			delete form_creation[j];
		j++;
	}
}
