#include "Array.h"
#include <iostream>

Array::Array() { 
	size = 5;
	ptr = new int[size]; 
	for (int ix = 0; ix < size; ix++) { 
		ptr[ix] = 0;
	}
}

Array::Array(int arraySize)  {
	size = (arraySize > 0 ? arraySize : 5);
	ptr = new int[size]; 
	for (int ix = 0; ix < size; ix++)  {
		ptr[ix] = 0;
	}
}

Array::Array(const Array &arrayToCopy) 
	:size(arrayToCopy.size)  { 
	ptr = new int[size]; 
	for (int ix = 0; ix < size; ix++) {
		ptr[ix] = arrayToCopy.ptr[ix]; 
	}
}

Array::~Array()  {
	delete[] ptr; 
}

int Array::getSize() const { 
	return size;
}

void Array::setArray() { 
	for (int ix = 0; ix < size; ix++) {
		std::cin >> ptr[ix]; 
	}
}

int* Array::getArray() {
	return ptr;
}

void Array::print() {
	std::cout << "Array: " << std::endl;
	for (int ix = 0; ix < size; ix++) {
		std::cout << ptr[ix] << "\t";
	}
}

Array Array::operator* (const Array &right) {
	if (size != right.size) {
		std::cout << "Arrays of different sizes!\n";
		exit(1); 
	}
	Array result(size);
	for (int ix = 0; ix < size; ix++)
		result.ptr[ix] = ptr[ix] * right.ptr[ix];
	return result; 
}

int &Array::operator[] (int subscript) {
	if (subscript < 0 || subscript >= size) {
		std::cout << "\nError index: " << subscript << " is not found." << std::endl;
	}
	return ptr[subscript]; 
}

bool Array::operator== (const Array &right) const { 
	if (size != right.size) {
		return false; 
	}
	else {
		return true; 
	}
}

bool Array::operator<= (const Array &right) const {
	if (size < right.size || size == right.size) {
		return false; 
	} 
	return true; 
}

void Array::printSort(int controll) {
	std::cout << "Array: " << std::endl;
	for (int ix = 0; ix < size; ix++) {
		if (controll <= ptr[ix]) {
			std::cout << ptr[ix] << "\t";
		}
	}
}