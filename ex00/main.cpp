#include "operation.hpp"
#include <iostream>

int main () {

	int aInt = 10;
	int bInt = 5;
	float aFloat = 20.5f;
	float bFloat = 40.2f;

	std::cout << max<int>(aInt, bInt) << std::endl;
	std::cout << max<float>(aFloat, bFloat) << std::endl;
	std::cout << std::endl;

	std::cout << min<int>(aInt, bInt) << std::endl;
	std::cout << min<float>(aFloat, bFloat) << std::endl;
	std::cout << std::endl;

	std::cout << "before swap: " << aInt << " " << bInt << std::endl;
	std::cout << "before swap: " << aFloat << " " << bFloat << std::endl;
	std::cout << std::endl;

	swap<int>(aInt, bInt);
	swap<float>(aFloat, bFloat);

	std::cout << "after swap: " << aInt << " " << bInt << std::endl;
	std::cout << "after swap: " << aFloat << " " << bFloat << std::endl;
	std::cout << std::endl;

	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}

	return 0;
}