#pragma once

class Array {
private:
	int *ptr; // указатель на массив
	int size; // размер массива
public:
	Array(); // конструктор по умолчанию
	Array(int); // конструктор с параметрами
	Array(const Array &); // конструктор копии
	~Array(); // десструктор

	int getSize() const; // возвратить количество элементов массива
	void setArray(); // заполнение массива
	int* getArray(); 
	void print();
	void printSort(int controll);
	
	Array operator* (const Array &);
	int &operator[] (int);
	bool operator== (const Array &) const; // оператор сравнения
	bool operator<= (const Array &) const;
};
