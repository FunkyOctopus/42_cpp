#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	PRINT("Default Constructor Called");
}

Point::Point(int a)
{
	a = 10;
	PRINT("Int Constructor Called");
}

Point::Point( float a, float b ) : x(a), y(b)
{
	PRINT("Float Constructor Called");	
}

Point::~Point()
{
	PRINT("Destructor Called");
}

Point & Point::operator=( Fixed const & input_class )
{
	(void) input_class;
	PRINT("Assigment Operator Called");
	return (*this);
}
