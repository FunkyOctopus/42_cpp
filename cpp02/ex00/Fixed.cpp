#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(  Fixed &class_name ) 
{
	std::cout << "Copy constructor called" << std::endl;
	operator=( class_name );
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

void 	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_value = raw;
}

int 	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}


Fixed &	Fixed::operator=( Fixed const & input_class )
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = input_class.getRawBits();
	return (*this);
}

const int	Fixed::nbr_fractional_bits = 8;
