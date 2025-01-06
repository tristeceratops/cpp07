#pragma once

#include <exception>

template <typename T> class Array
{
	private:
		T* ptr;
		int size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);

		~Array();

		Array &operator=(const Array &rhs);
		T &operator[](int index);
		const T &operator[](int index) const;
		int getSize() const;

		class ArrayOutOfBonds : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
};
