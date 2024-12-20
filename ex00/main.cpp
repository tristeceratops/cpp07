#include "whatever.hpp"
#include <iostream>

struct test
{
	int a;
	const char *str;
};


int main()
{
	int a = 7554698;
	int b = -12;

	std::cout << "min is = " << min(a, b) << std::endl;
	std::cout << "max is = " << max(b, a) << std::endl;
	std::cout << "a = " << a << " and b = " << b << std::endl;
	swap(b, a);
	std::cout << "a = " << a << " and b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " and b = " << b << std::endl;
	
	a = 2;
	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	test e = {4, "hi"};
	test f = {2, "hello"};

	std::cout << e.a << " " << e.str << std::endl;
	swap(e, f);
	std::cout << e.a << " " << e.str << std::endl;

	return 0;
}
