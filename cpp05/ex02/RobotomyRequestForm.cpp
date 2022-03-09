#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	setTarget("UNKNOWN");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
Form("RobotomyRequestForm", 72, 45)
{
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & input_class) : 
Form("RobotomyRequestForm", 72, 45)
{ 
	*this = input_class;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & input_class)
{
	setTarget(input_class.getTarget());

	return(*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));

	if (getExec_grade() <= executor.getGrade())
	{
		if (getIs_signed())
		{
			std::cout << "Some drilling noises... ";
			if (rand() % 100 < 50)
				std::cout << getTarget() << " has been robotomized successfully " << std::endl;
			else
				std::cout << "robotomy failed" << std::endl;
		}
		else
			throw Form::FormNotSignedException();
	}
	else
		throw Form::GradeTooLowException();
}
