#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <exception>
# include <iostream>
# include <list>
# include <vector>

class Span
{
	private:
		unsigned int N;
		std::vector<int> ArrayContainer;

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & input_class);
		~Span(void);

		Span & operator=(Span const & input_class);

		void addNumber(int add);
		void addManyNumbers(int add, int range);
		int shortestSpan(void);
		int longestSpan(void);

		void printEverything(void);

		class AlreadyNException: public std::exception
   		{
    		public:
    	    	virtual const char* what() const throw()
           		{
                	return ("Span already contains N elements!");
            	}
    	};

		class OneOrNoneException: public std::exception
   		{
    		public:
    	    	virtual const char* what() const throw()
           		{
                	return ("Span consists of one or none elements!");
            	}
    	};
};

#endif
