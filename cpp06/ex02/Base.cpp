#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base * generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;

	Base *ret;

	if (random == 0)
	{
		ret = new A();
		return (ret);
	}
	else if (random == 1)
	{
		ret = new B();
		return (ret);
	}
	ret = new C();
	return (ret);
}

void identify(Base* p)
{
	A * a_ptr = dynamic_cast<A *>(p);
	B * b_ptr = dynamic_cast<B *>(p);
	C * c_ptr = dynamic_cast<C *>(p);

	if (a_ptr)
		std::cout << "A" << std::endl;
	else if (b_ptr)
		std::cout << "B" << std::endl;
	else if (c_ptr)
		std::cout << "C" << std::endl;
	else
		std::cout << "?" << std::endl;		
}

void identify(Base& p)
{
	try
	{
		A & a_ptr = dynamic_cast<A &>(p);
		(void)a_ptr;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		B & b_ptr = dynamic_cast<B &>(p);
		(void)b_ptr;		
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		C & c_ptr = dynamic_cast<C &>(p);
		(void)c_ptr;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}
