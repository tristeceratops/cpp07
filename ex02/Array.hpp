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

		int size() const;

		class ArrayOutOfBonds : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
};
