#include "iter.hpp"

void truncate(std::string &str) {

	if (str.length() > 5) {
		str = str.substr(0, 5);
	} else if (str.length() < 5) {
		str.insert(str.end(), 5 - str.length(), '0');
	}
}

int main() {

	int intArray[5] = {5, 4, 3, 2, 1};
	float floatArray[5] = {10.2, 5.1, 0.5, 20, 100.25};
	std::string strArray[5] = {"hello", "bonjour", "yes", "fabulous", "main"};

	for (int i = 0; i < 5; i++) {
		std::cout << intArray[i] << std::endl;
	}
	iter<int *>(intArray, 5, pow<int>);
	for (int i = 0; i < 5; i++) {
		std::cout << intArray[i] << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; i++) {
		std::cout << floatArray[i] << std::endl;
	}
	iter<float *>(floatArray, 5, pow<float>);
	for (int i = 0; i < 5; i++) {
		std::cout << floatArray[i] << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 5; i++) {
		std::cout << strArray[i] << std::endl;
	}
	iter<std::string *>(strArray, 5, truncate);
	for (int i = 0; i < 5; i++) {
		std::cout << strArray[i] << std::endl;
	}

	iter<int *>(0, 10, pow<int>);

	return 0;
}