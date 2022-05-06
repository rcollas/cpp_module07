#ifndef CPP_MODULE07_ARRAY_TPP
#define CPP_MODULE07_ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() {

	this->m_array = 0;
	this->m_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {

	this->m_array = new T[n];
	this->m_size = n;
}

template <typename T>
Array<T>::Array(Array<T> const &src) : m_array(0), m_size(0) {

	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> const &rhs) {

	if (this->m_array) {
		delete [] this->m_array;
	}
	this->m_array = new T[rhs.m_size];
	for (unsigned int i = 0; i < rhs.m_size; i++) {
		this->m_array[i] = rhs.m_array[i];
	}
	this->m_size = rhs.m_size;
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n) {

	if (n >= this->m_size) {
		throw BadIndexException();
	}
	return this->m_array[n];
}

template <typename T>
Array<T>::~Array() {

	if (this->m_array) {
		delete [] m_array;
	}
}

template <typename T>
unsigned int Array<T>::size() const {

	return this->m_size;
}

#endif
