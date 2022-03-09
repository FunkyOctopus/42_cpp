#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>
# include <stdlib.h>

template <typename T>
class Array 
{
	private:
		T *array;
		int	length;

	public:
		Array(void) : length(0) { array = new T[0]; };
		Array(unsigned int n) : length(n) { array = new T[n]; };
		Array(Array const & input_class) 
		{
			array = new T[input_class.length];
		
			int i = 0;
			while (i < input_class.length)
			{
				array[i] = input_class.array[i];
				i++;
			}
			length = input_class.length;
		};
		~Array(void) { delete [] array; };

		Array & operator=(Array const & input_class)
		{
			delete [] array;
			array = new T[input_class.length];
		
			int i = 0;
			while (i < input_class.length)
			{
				array[i] = input_class.array[i];
				i++;
			}
			length = input_class.length;
			return (*this);
		};

		T & operator[](int i)
		{
			if (abs(i) >= length)
				throw Array::IndexOutOfBounds();
			return(array[i]);
		};

		int	size(void)
		{
			return (length);
		}

		class IndexOutOfBounds: public std::exception
   		{
    		public:
    	    	virtual const char* what() const throw()
           		{
                	return ("Index out of bounds!");
            	}
    	};
};

# endif
