#include <iostream>
#include <string>
using namespace std;

class MyException : exception
{
public:
	MyException();
	MyException(const char* str);
	MyException(const MyException& obj);
	MyException& operator=(const exception& obj);
	MyException& operator=(const MyException& obj);
	virtual const char* what() const;
	virtual ~MyException();
private:
	string message;
};

MyException::MyException() {}

MyException::MyException(const char* str) : message(string(str)) {}

MyException::MyException(const MyException& obj) : message(obj.message) {}

MyException& MyException::operator=(const exception& obj)
{
	this->message = string(obj.what());
	return *this;
}

MyException& MyException::operator=(const MyException& obj)
{
	this->message = obj.message;
	return *this;
}

const char* MyException::what() const
{
	/*const char* write = string(message.c_str() + '\n' + 'File' + __FILE__ + 'Line' + __LINE__);*/
	std::string word(__FILE__);
	auto len = word.find_last_of('\\');
	std::string file_name = word.substr(len + 1);
	/*std::cout << file_name << std::endl;
	std::cout << __LINE__ << std::endl;*/
	std::string out = message + '\n' + "FILE: " + __FILE__ + '\n' + "LINE: " + char(__LINE__);
	return out.c_str();
}

MyException::~MyException() {}

int main()
{
	try
	{
		std::string('abc').substr(10);
		int first = 5, second = 0;
		if (second == 0)
			throw MyException("Division by zero");
	}
	catch (MyException& exp)
	{
		cout << exp.what() << endl;
	}
	catch (...)
	{
		cout << "Other exception" << endl;
	}

	return 0;
}
