main.cpp
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");

	Date cur(4, 5, 2017);
	Date bh(1, 2, 1999);

	cout << "С вашего дня рождения прошло " << (cur - bh) << " дней\n";

	cur = cur + 5;
	cur += 5;

	cur.show();	// 14.05.2017

	cin.get(); cin.get();
}

date.h
#pragma once
class Date
{
public:
	Date();
	Date(long long second);
	Date(size_t d, size_t m, size_t y);
	bool operator<(const Date& obj);
	bool operator>(const Date& obj);
	bool operator==(const Date& obj);
	bool operator!=(const Date& obj);
	void currentTime();
	void show();
	size_t operator- (const Date& obj);
	Date operator+ (const size_t obj);
	void operator+=(const size_t obj);
	Date operator=(const Date& obj);

private:
	long long second;
};

date.cpp
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	this->second = 0;
}

Date::Date(long long second)
{
	this->second = second;
}

Date::Date(size_t d, size_t m, size_t y)
{
	this->second = d * 86400 + m * 2592000 + y * 31104000;
}

bool Date::operator<(const Date& obj)
{
	return this->second < obj.second;
}

bool Date::operator>(const Date& obj)
{
	return this->second > obj.second;
}

bool Date::operator==(const Date& obj)
{
	return this->second == obj.second;
}

bool Date::operator!=(const Date& obj)
{
	return this->second != obj.second;
}

void Date::currentTime()
{
	cout << __DATE__ << " " << __TIME__ << endl;
}

void Date::show()
{
	size_t y, d, m;
	y = this->second / 31104000;
	m = (this->second - (y * 31104000)) / 2592000;
	d = (this->second - (y * 31104000 + m * 2592000));
	cout << d << "." << m << "." << y << endl;
}

size_t Date::operator-(const Date& obj)
{
	size_t day;
	day = (this->second - obj.second) / 86400;
	return day;
}

Date Date::operator+(const size_t obj)
{
	this->second += obj * 86400;
	return *this;
}

void Date::operator+=(const size_t obj)
{
	this->second += obj * 86400;
}

Date Date::operator=(const Date& obj)
{
	this->second = obj.second;
	return *this;
}
.
