#include <iostream>
#include <string>
#include "fraction.h"

using namespace std;


int main()
{
	fraction first(3, 5), second(1, 2), third;

	third = first + second;
	third.show();
	cout << third << endl << endl;

	third = first - second;
	third.show();
	cout << third << endl << endl;

	third = first * second;
	third.show();
	cout << third << endl << endl;

	third = first / second;
	third.show();
	cout << third << endl << endl;
	return 0;
}



fraction.cpp 
#include "fraction.h"
#include <iostream>
using namespace std;

fraction::fraction() 
{
	numerator = 0;
	denominator = 0;
}

fraction::fraction(const unsigned int num, const unsigned int den)
{
	this->denominator = den;
	this->numerator = num;
}

fraction fraction::operator+(const fraction& obj)
{
	return fraction();
	size_t nok{ 0 };
	size_t max{ 0 };
	if (this->denominator >= obj.denominator) {
		max = this->denominator;
	}

	else {
		max = obj.denominator;
	}
	for (size_t i = max; i > 0; i++) {

		if (i % this->denominator == 0 && i % obj.denominator == 0) {
			nok = i;
			break;
		}
	}
	fraction newone(this->numerator * (nok / this->denominator), this->denominator * (nok / this->denominator));
	fraction newtwo(obj.numerator * (nok / obj.denominator), obj.denominator * (nok / obj.denominator));

	return fraction(newone.numerator + newtwo.numerator, nok);
}

fraction fraction::operator-(const fraction& obj)
{
	size_t nok{ 0 };
	size_t max{ 0 };
	if (this->denominator >= obj.denominator) {
		max = this->denominator;
	}

	else {
		max = obj.denominator;
	}
	for (size_t i = max; i > 0; i++) {

		if (i % this->denominator == 0 && i % obj.denominator == 0) {
			nok = i;
			break;
		}
	}
	fraction newone(this->numerator * (nok / this->denominator), this->denominator * (nok / this->denominator));
	fraction newtwo(obj.numerator * (nok / obj.denominator), obj.denominator * (nok / obj.denominator));

	return fraction(newone.numerator - newtwo.numerator, nok);
}


fraction::operator float()
{
	if (this->numerator == 0 && this->denominator == 0) 
		return 0;
	if (this->denominator == 0) {
		cout << "error" << endl;
		return FLT_MAX;
	}
	return  (float)this->numerator / (float)this->denominator;
}

void fraction::show()
{
	cout << numerator << endl;
	cout << "-" << endl;
	cout << denominator << endl;
}

fraction fraction::operator*(const fraction& obj)
{
	return fraction( this->numerator* obj.numerator , this->denominator* obj.denominator);
}

fraction fraction::operator/(const fraction& obj)
{
	return fraction(this-> numerator * obj.denominator , this->denominator*obj.numerator);
}

fraction fraction::operator+(const int& value)
{
	fraction obj(value, 1);
	size_t nok{ 0 };
	size_t max{ 0 };
	if (this->denominator >= obj.denominator) {
		max = this->denominator;
	}

	else {
		max = obj.denominator;
	}
	for (size_t i = max; i > 0; i++) {

		if (i % this->denominator == 0 && i % obj.denominator == 0) {
			nok = i;
			break;
		}
	}
	fraction newone(this->numerator * (nok / this->denominator), this->denominator * (nok / this->denominator));
	fraction newtwo(obj.numerator * (nok / obj.denominator), obj.denominator * (nok / obj.denominator));

	return fraction(newone.numerator + newtwo.numerator, nok);
}

fraction fraction::operator-(const int& value)
{
	fraction obj(value, 1);
	size_t nok{ 0 };
	size_t max{ 0 };
	if (this->denominator >= obj.denominator) {
		max = this->denominator;
	}

	else {
		max = obj.denominator;
	}
	for (size_t i = max; i > 0; i++) {

		if (i % this->denominator == 0 && i % obj.denominator == 0) {
			nok = i;
			break;
		}
	}
	fraction newone(this->numerator * (nok / this->denominator), this->denominator * (nok / this->denominator));
	fraction newtwo(obj.numerator * (nok / obj.denominator), obj.denominator * (nok / obj.denominator));

	return fraction(newone.numerator - newtwo.numerator, nok);
}


fraction.h
#pragma once
class fraction
{
private:
	unsigned int numerator;
	unsigned int denominator;
public:
	fraction();
	fraction(const unsigned int num, const unsigned int den);
	fraction operator+(const fraction& obj);
	fraction operator-(const fraction& obj);
	fraction operator*(const fraction& obj);
	fraction operator/(const fraction& obj);
	fraction operator+(const int& value);
	fraction operator-(const int& value);
	operator float();
	void show();
};
