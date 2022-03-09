#include "Convert.hpp"

Convert::Convert(void) {}

Convert::Convert(Convert const & input_class) 
{
	*this = input_class;
}

Convert::~Convert(void) {}

Convert & Convert::operator=(Convert const & input_class) 
{
	static_cast<void>(input_class);
	return (*this);
}

bool Convert::isChar()
{
	if (argv_str.length() == 1)
		return (true);
	return (false);
}

bool Convert::isInt(char const * argv)
{
	if (argv_str == "0")
		return (true);
	if (atoi(argv))
		return (true);
	return (false);
}

bool Convert::isDouble(char const * argv)
{
	if (argv_str == "-inf" || argv_str == "+inf" || argv_str == "nan")
	{
		nanCheck = true;
		return (true);
	}
	if (argv[argv_str.length() - 1] == 'f' || argv_str.find(".") != 1)
		return (false);

	int i = 0;
	while (isspace(argv[i]))
		i++;
	if (argv[i] == '+' || argv[i] == '-')
		i++;
	if (isdigit(argv[i]))
		i++;
	else
		return (false);
	while (isdigit(argv[i]))
		i++;
	if (argv[i] == '.')
		i++;
	while (isdigit(argv[i]))
		i++;
	if (argv[i] == '\0')
		return (true);
	return (false);
}

bool Convert::isFloat(char const * argv)
{
	if (argv_str == "-inff" || argv_str == "+inff" || argv_str == "nanf")
	{
		nanCheck = true;
		return (true);
	}
	if (argv_str == "-inf" || argv_str == "+inf" || 
		argv_str == "inf" || argv_str == "inff" || 
		argv_str == "nan")
		return (false);
	if (argv[argv_str.length() - 1] != 'f')
		return (false);
	if (atof(argv))
		return (true);
	return (false);
}

void Convert::toChar()
{
	Char = argv_str[0];
	Double = static_cast<double>(Char);
	Float = static_cast<float>(Char);
	Int = static_cast<int>(Char);
}

void Convert::toInt()
{
	Int = std::stoi(argv_str);
	Double = static_cast<double>(Int);
	Float = static_cast<float>(Int);
	if (Int > 127)
		Char = 0;
	else
		Char = static_cast<char>(Int);
}

void Convert::toDouble()
{
	Double = std::stod(argv_str);
	Float = static_cast<float>(Double);
	Int = static_cast<int>(Double);
	if (Double > 127)
		Char = 0;
	else
		Char = static_cast<char>(Double);
}

void Convert::toFloat()
{
	Float = std::stof(argv_str);
	Double = static_cast<double>(Float);
	Int = static_cast<int>(Float);
	if (Float > 127)
		Char = 0;
	else
		Char = static_cast<char>(Float);
}

void	Convert::ft_printer(void)
{
	if (nanCheck)
		std::cout << "Char: impossible" 	<<	std::endl;		
	else if (isprint(Char) && Char)
		std::cout << "Char: '"	<< 	Char 	<< "'" <<	std::endl;
	else
		std::cout << "Char: Non displayable" <<	std::endl;
	if (nanCheck)
		std::cout << "Int: impossible" 	<<	std::endl;		
	else
		std::cout << "Int: " 	<< 	Int 	<< 			std::endl;
	std::cout << "Float: " 	<< 	Float	<< "f" << 	std::endl;
	std::cout << "Double: " << 	Double	<< 			std::endl;
}

void	Convert::inputHandler(char const * argv)
{
	argv_str = static_cast<std::string>(argv);

	if (isFloat(argv))
		toFloat();
	else if (isDouble(argv))
		toDouble();
	else if (isInt(argv))
		toInt();
	else if (isChar())
		toChar();
	else
	{	
		std::cout << "Wrong type" << std::endl;
		return ;
	}
	ft_printer();
}
