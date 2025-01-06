#include <iostream>
#include <exception>
#include "Array.hpp" // Include your template class header

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
        for (int i = 0; i < arr2.getSize(); ++i)
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
        for (int i = 0; i < arr2.getSize(); ++i)
        {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }

        // Test 6: Out of bounds access
        std::cout << "Test 6: Access element out of bounds." << std::endl;
        std::cout << "arr2[10] = " << arr2[10] << std::endl; // Should throw an exception
    }
    catch (const Array<int>::ArrayOutOfBonds &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught general exception: " << e.what() << std::endl;
    }

    return 0;
}