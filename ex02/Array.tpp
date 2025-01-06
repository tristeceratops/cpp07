#include "Array.hpp"

template <typename T>
Array<T>::Array() : ptr(NULL), size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : ptr(new T[n]()), size(n) {}

template <typename T>
Array<T>::Array(const Array &copy) : ptr(new T[copy.size]), size(copy.size)
{
    for (int i = 0; i < size; ++i)
    {
        ptr[i] = copy.ptr[i];
    }
}

template <typename T>
Array<T>::~Array()
{
    delete[] ptr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
    if (this != &rhs)
    {
        delete[] ptr;
        size = rhs.size;
        ptr = new T[size];
        for (int i = 0; i < size; ++i)
        {
            ptr[i] = rhs.ptr[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](int index)
{
    if (index < 0 || index >= size)
    {
        throw ArrayOutOfBonds();
    }
    return ptr[index];
}

template <typename T>
const T &Array<T>::operator[](int index) const
{
    if (index < 0 || index >= size)
    {
        throw ArrayOutOfBonds();
    }
    return ptr[index];
}

template <typename T>
int Array<T>::getSize() const
{
    return this.size;
}

template <typename T>
const char *Array<T>::ArrayOutOfBonds::what() const throw()
{
    return "Array index out of bounds";
}