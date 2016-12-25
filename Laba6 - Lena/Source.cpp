#include "Array.h"
#include <iostream>

int main() {
	Array myArray1;     
	Array myArray2(10); 

	std::cout << "array Size myArray1: " << myArray1.getSize() << std::endl;
	std::cout << "array elements myArray1, after its creation:" << std::endl;
	myArray1.print();
	std::cout << std::endl << "Enter the 5 numbers:" << std::endl;
	myArray1.setArray(); 
	std::cout << std::endl << "The entered array: ";
	myArray1.print(); 
	std::cout << std::endl;
	system("pause");

	std::cout << "array Size myArray2: " << myArray2.getSize() << std::endl;
	std::cout << "array elements myArray2, after its creation:" << std::endl;
	myArray2.print(); 
	std::cout << std::endl << "Enter the 10 numbers:" << std::endl;
	myArray2.setArray(); 
	std::cout << std::endl << "The entered array: ";
	myArray2.print(); 
	std::cout << std::endl;
	system("pause");

	Array myArray3(myArray1);
	std::cout << "array Size myArray3: " << myArray1.getSize() << std::endl;
	std::cout << "array elements myArray3, after its creation:" << std::endl;
	myArray3.print(); 
	std::cout << std::endl;
	system("pause");

	if (myArray1 == myArray3) {
		Array myArray4 = myArray1 * myArray3; 
		std::cout << "array myArray4:" << std::endl;
		myArray4.print();
	}
	else {
		std::cout << "Arrays are not equal" << std::endl;
	}
	std::cout << std::endl;
	system("pause");

	std::cout << "Sort an array myArray2" << std::endl;
	myArray2.printSort(50);
	std::cout << std::endl;
	system("pause");

	int index;
	std::cout << "Enter index for print element myArray2: ";
	std::cin >> index;
	std::cout << "Element myArray2: " << myArray2[index];

	return 0;
}
