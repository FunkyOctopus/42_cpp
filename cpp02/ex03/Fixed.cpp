#include "Fixed.hpp"

Fixed::Fixed( void ) : fixed_point(0)
{
}

Fixed::Fixed( int const int_nbr )
{
	fixed_point = int_nbr << fractional;
}

Fixed::Fixed( float float_nbr )
{
	fixed_point = roundf(float_nbr * (float)(1 << fractional));
}

Fixed::Fixed( Fixed const & input_class ) 
{
	operator=( input_class );
}

Fixed::~Fixed( void )
{
}

void 	Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}

int 	Fixed::getRawBits( void ) const
{
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
	fixed_point = input_class.fixed_point;
	return (*this);
}

std::ostream & operator<<( std::ostream & output, Fixed const & input_class )
{
	output << input_class.toFloat();
	return (output);
}




bool Fixed::operator>( const Fixed & input_class ) const
{
	if (this->toFloat() > input_class.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<( const Fixed & input_class ) const
{
	if (this->toFloat() < input_class.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=( const Fixed & input_class ) const
{
	if (this->toFloat() >= input_class.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=( const Fixed & input_class ) const
{
	if (this->toFloat() <= input_class.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator==( const Fixed & input_class ) const
{
	if (this->toFloat() == input_class.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=( const Fixed & input_class ) const
{
	if (this->toFloat() != input_class.toFloat())
		return (true);
	else
		return (false);
}




Fixed Fixed::operator+( const Fixed & input_class ) const
{
	return (Fixed(this->toFloat() + input_class.toFloat()));
}

Fixed Fixed::operator-( const Fixed & input_class ) const
{
	return (Fixed(this->toFloat() - input_class.toFloat()));
}

Fixed Fixed::operator*( const Fixed & input_class ) const
{
	return (Fixed(this->toFloat() * input_class.toFloat()));
}

Fixed Fixed::operator/( const Fixed & input_class ) const
{
	return (Fixed(this->toFloat() / input_class.toFloat()));
}




Fixed & Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed & Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->fixed_point++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->fixed_point--;
	return (temp);
}




const Fixed & Fixed::min( Fixed & input_class_1, Fixed & input_class_2 )
{
	if (input_class_1 < input_class_2)
		return (input_class_1);
	return (input_class_2);
}

const Fixed & Fixed::max( Fixed & input_class_1, Fixed & input_class_2 )
{
	if (input_class_1 > input_class_2)
		return (input_class_1);
	return (input_class_2);
}

const Fixed & Fixed::min( const Fixed & input_class_1, const Fixed & input_class_2 )
{
	if (input_class_1 < input_class_2)
		return (input_class_1);
	return (input_class_2);
}

const Fixed & Fixed::max( const Fixed & input_class_1, const Fixed & input_class_2 )
{
	if (input_class_1 > input_class_2)
		return (input_class_1);
	return (input_class_2);
}




const int	Fixed::fractional = 8;
