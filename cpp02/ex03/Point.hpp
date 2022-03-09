#pragma once

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	
	public:
		Point();
		Point( int a );
		Point( float a, float b );
		~Point();

		Point & operator=( Fixed const & input_class );
};
