#include "Data.hpp"

int	main(void)
{
	Data	data(42);
	Data *	data_ptr = &data;

	std::cout << data_ptr << std::endl;
	std::cout << deserialize(serialize(data_ptr)) << std::endl;

	std::cout << std::endl;

	std::cout << "Data Pre: " << data_ptr->getData() << std::endl;

	std::cout << std::endl;	

	uintptr_t encrypted = serialize(data_ptr);
	std::cout << "Encryptd: " << encrypted << std::endl;

	Data *	decrypted  = &data;deserialize(encrypted);
	std::cout << "Decrypted: " << decrypted << std::endl;

	std::cout << std::endl;

	std::cout << "Data After: "  << decrypted->getData() << std::endl;

	return (0);
}
