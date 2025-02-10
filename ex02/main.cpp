#include <iostream>
#include <exception>
#include "Array.hpp"
#include "Array.tpp"

int main()
{
    try
    {
        // Test 1: Construction with no parameters
        Array<int> arr1;
        std::cout << "Test 1: Empty array size = " << arr1.getSize() << std::endl;

        // Test 2: Construction with unsigned int n
        unsigned int n = 5;
        Array<int> arr2(n);
        std::cout << "Test 2: Array of size " << n << " created." << std::endl;
        for (unsigned int i = 0; i < arr2.getSize(); ++i)
        {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }

        // Test 3: Copy constructor
        Array<int> arr3 = arr2; // Copy constructor
        std::cout << "Test 3: Copy of arr2 created. Modifying arr2 should not affect arr3." << std::endl;
        arr2[0] = 42; // Modify arr2
        std::cout << "arr2[0] = " << arr2[0] << ", arr3[0] = " << arr3[0] << std::endl;

        // Test 4: Assignment operator
        Array<int> arr4;
        arr4 = arr2; // Assignment operator
        std::cout << "Test 4: arr4 assigned from arr2. Modifying arr2 should not affect arr4." << std::endl;
        arr2[1] = 84; // Modify arr2
        std::cout << "arr2[1] = " << arr2[1] << ", arr4[1] = " << arr4[1] << std::endl;

        // Test 5: Access elements with subscript operator
        std::cout << "Test 5: Access elements in arr2 using subscript operator." << std::endl;
        for (unsigned int i = 0; i < arr2.getSize(); ++i)
        {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }

        // Test 6: Out of bounds access
        std::cout << "Test 6: Access element out of bounds." << std::endl;
        try
        {
            std::cout << "arr2[10] = " << arr2[10] << std::endl; // Should throw an exception
        }
        catch (const std::exception &e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test 7: Array with double type
        Array<double> arrDouble(3);
        std::cout << "Test 7: Array of double created." << std::endl;
        for (unsigned int i = 0; i < arrDouble.getSize(); ++i)
        {
            arrDouble[i] = i * 0.5;
            std::cout << "arrDouble[" << i << "] = " << arrDouble[i] << std::endl;
        }

        // Test 8: Array with std::string type
        Array<std::string> arrString(2);
        std::cout << "Test 8: Array of std::string created." << std::endl;
        arrString[0] = "Hello";
        arrString[1] = "World";
        for (unsigned int i = 0; i < arrString.getSize(); ++i)
        {
            std::cout << "arrString[" << i << "] = " << arrString[i] << std::endl;
        }
        // Test 9: Array with negative size
        std::cout << "Test 9: Array of negative size created." << std::endl;
		Array<int> negativeTest(-4);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}