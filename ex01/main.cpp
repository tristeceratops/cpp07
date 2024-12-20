#include "iter.hpp"
#include "iostream"

// A sample function to be passed to iter
template <typename T>
void printElement(T element) {
    std::cout << element << " ";
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

    return 0;
}