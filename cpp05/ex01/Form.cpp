#include "Form.hpp"

Form::Form(void) : name("UNKNOWN"), is_signed(false), sign_grade(0), exec_grade(0) {}

Form::Form(std::string input_name, int input_sign_grade, int input_exec_grade) : 
name(input_name), is_signed(false), sign_grade(input_sign_grade), exec_grade(input_exec_grade) 
{
	if (sign_grade > 150 || exec_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (sign_grade < 1 || exec_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(Form const & input_class) : name(input_class.name),
is_signed(input_class.is_signed), sign_grade(input_class.sign_grade), 
exec_grade(input_class.exec_grade) {}

Form::~Form(void) {}

Form & Form::operator=(Form const & input_class)
{
	is_signed = input_class.is_signed;
	return (*this);
}

std::string const Form::getName(void) const
{
	return (name);
}

bool Form::getIs_signed(void) const
{
	return (is_signed);
}

int Form::getSign_grade(void) const
{
	return (sign_grade);
}

int Form::getExec_grade(void) const
{
	return (exec_grade);
}

void Form::beSigned(Bureaucrat const & input_class)
{
	if (input_class.getGrade() >= sign_grade)
		throw Form::GradeTooLowException();
	else
		is_signed = true;
}

std::ostream & operator<<(std::ostream & output, Form const & input_class)
{
	output << "Name: " << input_class.getName() << " Is_Signed: " << input_class.getIs_signed() <<
	" getSign_grade: " << input_class.getSign_grade() << " getExecute_grade: " << input_class.getExec_grade();
	return (output);
}
