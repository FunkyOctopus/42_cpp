#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		int data;

	public:
		Data(void);
		Data(int input_data);
		Data(Data const & input_class);
		~Data(void);
		Data & operator=(Data const & input_class);

		int getData(void) const;
		void setData(int const input_data);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
