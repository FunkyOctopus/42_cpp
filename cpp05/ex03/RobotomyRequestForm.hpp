#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & input_class);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & input_class);

		void	execute(Bureaucrat const & executor) const;
};

#endif
