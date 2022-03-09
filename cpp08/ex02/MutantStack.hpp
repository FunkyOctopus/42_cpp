#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack(void) {};
		MutantStack(MutantStack const & input_class) { *this = input_class; };
		~MutantStack(void) {};

		MutantStack & operator=(MutantStack const & input_class) 
		{
			*this = input_class;
			return (*this);
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin(void) { return (this->c.begin()); };
		iterator end(void) { return (this->c.end()); };
};

#endif
