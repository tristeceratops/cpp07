#include "whatever.hpp"
#include <iostream>
#include <string>

struct test
{
	int a;
	char c;
	const char *str;
};


int main()
{
	int a = 7554698;
	int b = -12;

	std::cout << "min is = " << ::min(a, b) << std::endl;
	std::cout << "max is = " << ::max(b, a) << std::endl;
	std::cout << "a = " << a << " and b = " << b << std::endl;
	::swap(b, a);
	std::cout << "a = " << a << " and b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << " and b = " << b << std::endl;
	
	a = 2;
	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string s1 = "42";
	std::string s2 = "423";

	std::cout << "min is = " << ::min(s1, s2) << std::endl;
	std::cout << "max is = " << ::max(s1, s2) << std::endl;
	std::cout << "s1 = " << s1 << " and s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "s1 = " << s1 << " and s2 = " << s2 << std::endl;

	test e = {4, 'e', "hi"};
	test f = {2, 'h', "hello"};

	std::cout << e.a << " " << e.str << std::endl;
	::swap(e, f);
	std::cout << e.a << " " << e.str << std::endl;
	std::cout << f.a << " " << f.str << std::endl;
	std::cout << "min is = " << ::min(e.a, f.a) << std::endl;
	std::cout << "max is = " << ::max(e.a, f.a) << std::endl;

	return 0;
}
