#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	setTarget("UNKNOWN");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
Form("ShrubberyCreationForm", 145, 137)
{
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & input_class) : 
Form("ShrubberyCreationForm", 145, 137)
{ 
	*this = input_class;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & input_class)
{
	setTarget(input_class.getTarget());

	return(*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getExec_grade() <= executor.getGrade())
	{
		if (getIs_signed())
			make_tree_file();
		else
			throw Form::FormNotSignedException();
	}
	else
		throw Form::GradeTooLowException();
}

void ShrubberyCreationForm::make_tree_file(void) const
{
	std::ofstream writeFile;

	writeFile.open(getTarget() + "_shrubbery", std::ios::trunc);
	if (writeFile.is_open())
	{
			writeFile << "....0.........0...." << std::endl;
			writeFile << "...000.......000..." << std::endl;
			writeFile << "..00000.....00000.." << std::endl;
			writeFile << ".0000000...0000000." << std::endl;
			writeFile << "...000.......000...";
	}
	else
		std::cout << "Unable to open file: " << getTarget() + "_shrubbery" << std::endl;

	writeFile.close();
}
