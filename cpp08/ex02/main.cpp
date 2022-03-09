#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737); 
	//[...] 
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite) 
	{
		std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack); 

	std::cout << std::endl;
	MutantStack<int> example2;
	example2.push(1);
	example2.push(2);
	example2.push(3);
	std::cout << "Is Empty? " << std::boolalpha << example2.empty() << std::endl;
	std::cout << "Size: " << example2.size() << std::endl;

	MutantStack<int>::iterator it2 = example2.begin(); 
	MutantStack<int>::iterator ite2 = example2.end();

	while (it2 != ite2) 
	{
		std::cout << *it2 << std::endl;
		++it2; 
	}

	return 0;
}
