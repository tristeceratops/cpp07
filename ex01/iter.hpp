#pragma once

template <typename T, typename F> void iter(T *a, int length, F func)
{
	for (int i = 0; i < length; i++)
		func(a[i]);	
};