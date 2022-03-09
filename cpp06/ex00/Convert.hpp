#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h> 

class Convert
{
	private:
		std::string	argv_str;
		bool		nanCheck;
		char		Char;
		int			Int;
		float		Float;
		double		Double;

		bool isFloat(char const * argv);
		bool isDouble(char const * argv);
		bool isInt(char const * argv);
		bool isChar();

		void toFloat();
		void toDouble();
		void toInt();
		void toChar();

		bool nanChecker();

	public:
		Convert(void);
		Convert(Convert const & input_class);
		~Convert(void);
		Convert & operator=(Convert const & input_class);

		void	inputHandler(char const * argv);
		void	ft_printer(void);
};

#endif
