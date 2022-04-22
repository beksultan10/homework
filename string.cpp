#include "string.h"

my_string::my_string()
{
	this->str = nullptr;

}

my_string::my_string(const char* str)
{
	size_t size = strlen(str);
	this->str = new char[size + 1];
	strcpy_s(this->str , size + 1 , str);
}

my_string::my_string(const my_string& obj)
{
	size_t size = strlen(obj.str);
	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, obj.str);
}

my_string::my_string(my_string&& obj)
{
	this->str = obj.str;
	obj.str = nullptr;
}

my_string::~my_string()
{
	if (this->str)
		delete[] this->str;
}

size_t my_string::find(const char* str, size_t pos) const
{
	if (this->str) {
		const char* ptr = strstr(this->str, str);
		if (ptr)
			return ptr - str;
	}
	return npos;
}

size_t my_string::find(const my_string& obj, size_t pos) const
{
	if (this->str) {
		const char* ptr = strstr(this->str, obj.str);
		if (ptr)
			return ptr - obj.str;
	}
	return npos;
}

void my_string::replace(size_t pos, size_t len, const char* str)
{
	if (this->str) {
		if (len == npos) {
			strcpy_s(this->str, strlen(this->str) + 1, str + pos);
		}
		else {
			strncpy_s(this->str, strlen(this->str) + 1, str + pos, len);
		}
		 
	}
	
}

void my_string::replace(size_t pos, size_t len, const my_string& obj)
{
	if (this->str) {
		if (len == npos) {
			strcpy_s(this->str, strlen(this->str) + 1, obj.str + pos);
		}
		else {
			strncpy_s(this->str, strlen(this->str) + 1, obj.str + pos, len);
		}

	}
}

void my_string::push_back(char ch)
{
	size_t size = strlen(this->str);
	this->str[size + 1] = '\0';
	std::cout << this->str + ch;
}

void my_string::pop_back()
{
	size_t size = strlen(this->str);
	this->str[size - 1] = '\0';
	std::cout << this->str;
}











#include "string.h"

my_string::my_string()
{
	this->str = nullptr;

}

my_string::my_string(const char* str)
{
	size_t size = strlen(str);
	this->str = new char[size + 1];
	strcpy_s(this->str , size + 1 , str);
}

my_string::my_string(const my_string& obj)
{
	size_t size = strlen(obj.str);
	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, obj.str);
}

my_string::my_string(my_string&& obj)
{
	this->str = obj.str;
	obj.str = nullptr;
}

my_string::~my_string()
{
	if (this->str)
		delete[] this->str;
}

inline size_t my_string::length() const
{

	return strlen(this->str);
}

const char my_string::at(size_t pos) const
{
	if (this->str) {
		return this->str[pos];
	}
	return npos;
}

size_t my_string::find(const char* str, size_t pos) const
{
	if (this->str) {
		const char* ptr = strstr(this->str + pos, str);
		if (ptr)
			return ptr - str;
	}
	return npos;
}

size_t my_string::find(const my_string& obj, size_t pos) const
{
	if (this->str) {
		const char* ptr = strstr(this->str, obj.str);
		if (ptr)
			return ptr - obj.str;
	}
	return npos;
}

void my_string::clear()
{
	if (this->str) {
		delete[] this->str;
	}
}

void my_string::replace(size_t pos, size_t len, const char* str)
{
	if (this->str) {
		if (len == npos) {
			strcpy_s(this->str + pos, strlen(this->str) + 1, str);
		}
		else {
			strncpy_s(this->str + pos, strlen(this->str) + 1, str, len);
		}
		 
	}
	
}

void my_string::replace(size_t pos, size_t len, const my_string& obj)
{
	if (this->str) {
		if (len == npos) {
			strcpy_s(this->str, strlen(this->str) + 1, obj.str + pos);
		}
		else {
			strncpy_s(this->str, strlen(this->str) + 1, obj.str + pos, len);
		}

	}
}

void my_string::push_back(char ch)
{
	/*size_t size = strlen(this->str);
	this->str[size + 1] = '\0';
	std::cout << this->str + ch;*/
}

void my_string::pop_back()
{
	size_t size = strlen(this->str);
	this->str[size - 1] = '\0';
	std::cout << this->str;
}

void my_string::append(const char* str)
{
	
}
