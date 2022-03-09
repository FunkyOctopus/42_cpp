#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_point(0)
{
	PRINT("Default constructor called");
}

Fixed::Fixed( int const int_nbr )
{
	PRINT("Int constructor called");
	fixed_point = int_nbr << fractional;
}

Fixed::Fixed( float float_nbr )
{
	PRINT("Float constructor called");
	fixed_point = roundf(float_nbr * (float)(1 << fractional));
}

Fixed::Fixed( Fixed const & input_class ) 
{
	PRINT("Copy constructor called");
	operator=( input_class );
}

Fixed::~Fixed( void )
{
	PRINT("Destructor called");
}

void 	Fixed::setRawBits( int const raw )
{
	PRINT("setRawBits member function called");
	fixed_point = raw;
}

int 	Fixed::getRawBits( void ) const
{
	PRINT("getRawBits member function called");
	return (fixed_point);
}

float 	Fixed::toFloat( void ) const
{
	return ((float)fixed_point / (float)(1 << fractional));
}

int 	Fixed::toInt( void ) const
{
	return (fixed_point >> fractional);
}

Fixed &	Fixed::operator=( Fixed const & input_class )
{
	PRINT("Assignation operator called");
	fixed_point = input_class.fixed_point;
	return (*this);
}

std::ostream & operator<<( std::ostream & output, Fixed const & input_class )
{
	output << input_class.toFloat();
	return (output);
}

const int	Fixed::fractional = 8;
