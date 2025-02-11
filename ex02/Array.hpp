#pragma once

#include <exception>
#include <limits>

template <typename T> class Array
{
	private:
		T* ptr;
		unsigned int size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);

		~Array();

		Array &operator=(const Array &rhs);
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int getSize() const;

		class ArrayOutOfBonds : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NegativeSize : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
};
