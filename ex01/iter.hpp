#ifndef CPP_MODULE07_ITER_HPP
#define CPP_MODULE07_ITER_HPP

#include <iostream>

template <typename T>
void pow(T &x) {

	x *= x;
}

template <typename T, typename U>
void iter(T array, int size, U func) {

	if (!array) {
		return;
	}
	for (int i = 0; i < size ; i++) {
		func(array[i]);
	}
}

#endif
