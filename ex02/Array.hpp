#ifndef CPP_MODULE07_ARRAY_HPP
#define CPP_MODULE07_ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const &src);
		~Array();

		Array<T> &operator=(Array<T> const &rhs);
		T &operator[](unsigned int n);

		unsigned int size() const;

	class BadIndexException : public std::exception {
		public:
			virtual const char * what() const throw() {
				return "Array: bad index";
			};
	};

	private:
		T *m_array;
		unsigned int m_size;
};

#endif
