#include "Base.hpp"

int main(void)
{
	Base * base_ptr = generate();

	identify(base_ptr);

	identify(*base_ptr);

	return (0);
}
