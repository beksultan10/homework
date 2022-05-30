main
#include <iostream>
#include "Student.h"
#include "group.h"

int main()
{
	setlocale(LC_ALL, "ru");

	/* group grop;
	Student first("Бексултан", "Серик");
	grop.add(first);
	grop.add(Student("Димаш", "Бексултанов"));
	grop.add(Student("Дмитрий", "Доценко"));
	grop.add(Student("Аманбаев", "Алимжан"));
	grop.add(Student("Владислав", "Костенко"));
	std::cout << grop << std::endl;
	std::cout << "---------------------" << std::endl;

	grop.remove(first);
	std::cout << grop << std::endl;*/

	setlocale(0, "Russian");

	group sep_212;

	sep_212.add_teacher(Teacher("Юрий", "Ерофеев"));

	sep_212.add_student(Student("Бексултанов", "Динмухаммед"));
	sep_212.add_student(Student("Серик", "Бексултан"));
	sep_212.add_student(Student("Доценко", "Дмитрий"));

	std::cout << sep_212 << std::endl;


	return 0;
}



group.cpp
#include "group.h"

group::group()
{
}

group::group(Teacher tchr)
{
	one = tchr;
}

void group::add_teacher(const Teacher tchr)
{
	one = tchr;
}


void group::change_teacher(const Teacher tchr)
{
	one = tchr;
}

void group::add_student(Student stdnt)
{
	students.push_back(stdnt);
}

void group::remove_student(Student stdnt)
{
	auto size = students.size();
	std::vector<Student> vs;
	for (auto i = 0; i < size; i++)
		if (!students[i].equal(stdnt))
			vs.push_back(students[i]);
	students = vs;
}

std::ostream& operator<<(std::ostream& os, const group grp)
{
	auto size = grp.students.size();
	os << "< " << "Teacher: " << grp.one << " >" << std::endl;
	os << "< " << "Students: ";
	for (auto i = 0; i < size; i++)
	{
		os << grp.students[i] << " ";
	}
	os << " >";
	return os;
}

group.h
#pragma once
#include<iostream>
#include<vector>
#include"Student.h"
#include "Teacher.h"

class group
{
	Teacher one;
	std::vector<Student> students;
public:
	group();
	group(Teacher tchr);
	void add_teacher(const Teacher tchr);
	void change_teacher(Teacher tchr);
	void add_student(Student stdnt);
	void remove_student(Student stdnt);
	friend std::ostream& operator<<(std::ostream& os, const group grp);
};


teacher.cpp
#include "Teacher.h"

Teacher::Teacher()
{
}

Teacher::Teacher(const char* fllnm, const char* prdmt)
{
	full_name = fllnm;
	predmet = prdmt;
}

std::string Teacher::get_full_name()
{
	return full_name;
}

std::string Teacher::get_predmet()
{
	return predmet;
}

bool Teacher::equal(const Teacher tchr)
{
    return full_name == tchr.full_name && predmet == tchr.predmet;
}

std::ostream& operator<<(std::ostream& os, const Teacher& tchr)
{
	os << "<" << tchr.full_name << "> - <" << tchr.predmet << ">";
	return os;
}

teacher.h
#pragma once
#include <iostream>
class Teacher
{
	std::string full_name;
	std::string predmet;
public:
	Teacher();
	Teacher(const char* fllnm, const char* prdmt);
	std::string get_full_name();
	std::string get_predmet();
	bool equal(const Teacher tchr);
	friend std::ostream& operator<<(std::ostream& os, const Teacher& tchr);
};


student.h
#pragma once
#include<iostream>
#include<string>

class Student
{
	std::string name;
	std::string surname;
public:
	Student(const char* nm, const char* srnm);
	std::string get_name();
	std::string get_surname();
	bool equal(const Student stdnt);
	friend std::ostream& operator<<(std::ostream& os, const Student& stdnt);
};

student.cpp
#include "Student.h"

Student::Student(const char* nm, const char* srnm)
{
	name = nm;
	surname = srnm;
}

std::string Student::get_name()
{
	return name;
}

std::string Student::get_surname()
{
	return surname;
}

bool Student::equal(const Student stdnt)
{
	return name == stdnt.name && surname == stdnt.surname;
}

std::ostream& operator<<(std::ostream& os, const Student& stdnt)
{
	os << "<" << stdnt.name << "> - <" << stdnt.surname << ">";
	return os;
}
