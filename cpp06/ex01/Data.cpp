#include "Data.hpp"

Data::Data(void) : data(0) {}

Data::Data(int input_data) : data(input_data) {}

Data::Data(Data const & input_class)
{
	*this = input_class;
}

Data::~Data(void) {}

Data & Data::operator=(Data const & input_class)
{
	data = input_class.data;
	return (*this);
}

int Data::getData(void) const
{
	return (data);
}

void Data::setData(int const input_data)
{
	data = input_data;
}


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
