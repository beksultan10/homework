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
