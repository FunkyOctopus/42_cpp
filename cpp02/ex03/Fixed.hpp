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

		bool operator>( const Fixed & input_class ) const;
		bool operator<( const Fixed & input_class ) const;
		bool operator>=( const Fixed & input_class ) const;
		bool operator<=( const Fixed & input_class ) const;
		bool operator==( const Fixed & input_class ) const;
		bool operator!=( const Fixed & input_class ) const;

		Fixed operator+( const Fixed & input_class ) const;
		Fixed operator-( const Fixed & input_class ) const;
		Fixed operator*( const Fixed & input_class ) const;
		Fixed operator/( const Fixed & input_class ) const;

		Fixed & operator++();
		Fixed & operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		static const Fixed & min( Fixed & input_class_1, Fixed & input_class_2 );
		static const Fixed & max( Fixed & input_class_1, Fixed & input_class_2 );
		static const Fixed & min( const Fixed & input_class_1, const Fixed & input_class_2 );
		static const Fixed & max( const Fixed & input_class_1, const Fixed & input_class_2 );
};

std::ostream & operator<<( std::ostream & output, Fixed const & input_class );
