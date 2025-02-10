#include "iter.hpp"
#include <iostream>
#include <string>


typedef struct	student
{
	int age;
	std::string name;
	student &operator++(void) {
		age++;
		return *this;
	}
	student operator++(int) {
		student tmp = *this;
		++(*this);
		return tmp;
	}

}				student;

std::ostream &operator<<(std::ostream &o, student const &i)
{
	o << "Name: " << i.name << " Age: " << i.age;
	return o;
}

// A sample function to be passed to iter
template <typename T>
void printElement(T element) {
	std::cout << element << " ";
}

template <typename T>
void incr(T &element) {
	element ++;
}

int main() {
	// Test case 1: Array of integers
	int intArr[] = {1, 2, 3, 4, 5};
	size_t intArrLength = sizeof(intArr) / sizeof(intArr[0]);
	std::cout << "Testing with an integer array: ";
	iter(intArr, intArrLength, printElement<int>);
	std::cout << std::endl;

	// Test case 2: Array of doubles
	double doubleArr[] = {1.1, 2.2, 3.3, 4.4};
	size_t doubleArrLength = sizeof(doubleArr) / sizeof(doubleArr[0]);
	std::cout << "Testing with a double array: ";
	iter(doubleArr, doubleArrLength, printElement<double>);
	std::cout << std::endl;

	// Test case 3: Array of strings
	std::string strArr[] = {"Hello", "World", "Iter", "Test"};
	size_t strArrLength = sizeof(strArr) / sizeof(strArr[0]);
	std::cout << "Testing with a std::string array: ";
	iter(strArr, strArrLength, printElement<std::string>);
	std::cout << std::endl;

	// Test case 4: Array of characters
	char charArr[] = {'A', 'B', 'C', 'D'};
	size_t charArrLength = sizeof(charArr) / sizeof(charArr[0]);
	std::cout << "Testing with a char array: ";
	iter(charArr, charArrLength, printElement<char>);
	std::cout << std::endl;

	iter(intArr, intArrLength, incr<int>);
	std::cout << "Testing incr with a int array: ";
	iter(intArr, intArrLength, printElement<int>);
	std::cout << std::endl;	

	student students[] = {{20, "Alice"}, {21, "Bob"}, {22, "Charlie"}};
	size_t studentsLength = sizeof(students) / sizeof(students[0]);
	std::cout << "Testing with a student array: ";
	iter(students, studentsLength, printElement<student>);
	std::cout << std::endl;
	iter(students, studentsLength, incr<student>);
	std::cout << "Testing incr with a student array: ";
	iter(students, studentsLength, printElement<student>);
	std::cout << std::endl;

	return 0;
}
