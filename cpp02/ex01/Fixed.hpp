#pragma once

# include <iostream>
# include <cmath>

# define PRINT(msg) (std::cout << msg << std::endl)

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional;

	public:
		Fixed( void );
		Fixed( int int_nbr );
		Fixed( float float_nbr );
		Fixed( Fixed const & input_class );
		~Fixed( void );

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		
		float 	toFloat( void ) const;
		int 	toInt( void ) const;

		Fixed &	operator=( Fixed const & input_class );
};

std::ostream & operator<<( std::ostream & output, Fixed const & input_class );
