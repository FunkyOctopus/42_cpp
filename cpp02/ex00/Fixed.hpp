#pragma once

# include <iostream>

class Fixed
{
	private:
		int					fixed_point_value;
		static const int	nbr_fractional_bits;

	public:
		Fixed( void );
		Fixed( Fixed & input_class );
		~Fixed( void );

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );

		Fixed &	operator=( Fixed const & input_class );
};
