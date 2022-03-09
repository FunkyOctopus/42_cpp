#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	setTarget("UNKNOWN");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
Form("PresidentialPardonForm", 25, 5)
{
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & input_class) : 
Form("PresidentialPardonForm", 25, 5)
{ 
	*this = input_class;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & input_class)
{
	setTarget(input_class.getTarget());

	return(*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getExec_grade() <= executor.getGrade())
	{
		if (getIs_signed())
			std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		else
			throw Form::FormNotSignedException();
	}
	else
		throw Form::GradeTooLowException();
}
