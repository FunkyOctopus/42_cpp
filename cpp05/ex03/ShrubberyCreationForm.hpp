#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & input_class);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & input_class);

		void	execute(Bureaucrat const & executor) const;
		void	make_tree_file(void) const;
};

#endif
