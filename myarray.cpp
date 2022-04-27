MyArray.h
#pragma once
#include <iostream>
using namespace std;

class MyArray {
public:
	MyArray();
	explicit MyArray(const size_t size);
	MyArray(const MyArray& obj);
	MyArray(MyArray&& obj);
	MyArray operator=(const MyArray& obj);
	MyArray operator=(MyArray&& obj);
	MyArray operator+ (const MyArray& obj) const;
	void begin();
	bool end() const;
	void next();
	int	get() const;
	void set(const int data, const size_t pos = 0);
	void resize(const size_t new_size);
	void revers();
	void sort();
	size_t lenght() const;
	friend ostream& operator<< (ostream& os, const MyArray obj);
	~MyArray();
private:
	size_t size;
	int* masiv;
	size_t index;
};

MyArray.cpp
#include "MyArray.h"

ostream& operator<<(ostream& os, const MyArray obj)
{
	for (auto i = 0; i < obj.size; i++)
		os << obj.masiv[i] << " ";
	return os;
}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	this->masiv = new int[obj.size];
	for (auto i = 0; i < obj.size; i++)
		this->masiv[i] = obj.masiv[i];
}

MyArray::MyArray(MyArray&& obj)
{
	this->size = obj.size;
	this->masiv = obj.masiv;
	obj.masiv = nullptr;
}

MyArray MyArray::operator=(const MyArray& obj)
{
	this->size = obj.size;
	if (this->masiv)
		delete[] this->masiv;
	this->masiv = new int[obj.size];
	for (auto i = 0; i < obj.size; i++)
		this->masiv[i] = obj.masiv[i];
	return *this;
}

MyArray MyArray::operator=(MyArray&& obj)
{
	this->size = obj.size;
	if (this->masiv)
		delete[] this->masiv;
	this->masiv = obj.masiv;
	obj.masiv = nullptr;
	return *this;
}

size_t MyArray::lenght() const
{
	return size_t();
}

MyArray::~MyArray()
{
	
}

int MyArray::get() const
{
	return 0;
}

main.cpp
#include <iostream>
#include "MyArray.h"

using namespace std;

int main()
{
	const auto SIZE = 10;

	MyArray first(SIZE), second(SIZE), third;

	for (auto i = 0; i < SIZE; i++)
	{
		first.set(i, i);
		second.set(SIZE - i, i);
	}

	for (first.begin(); first.end(); first.next())
		cout << first.get() << ", ";
	cout << endl;

	cout << first << endl << second << endl << endl;

	third = first = second;
	cout << first << endl << second << endl << third << endl << endl;

	third = first + second;
	cout << first << endl << second << endl << third << endl << endl;

	third.resize(30);
	cout << third << endl;

	third.resize(20);
	cout << third << endl;

	third.revers();
	cout << third << endl;

	third.sort();
	cout << third << endl;

	return 0;
}
