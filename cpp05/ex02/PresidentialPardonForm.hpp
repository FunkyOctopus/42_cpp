#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & input_class);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & input_class);

		void	execute(Bureaucrat const & executor) const;
};

#endif
