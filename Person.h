#ifndef PERSON_H
#define PERSON_H
#include <iostream>


class Person{

public:
	std::string *name = new std::string;
	int *age = new int;

	Person();
	Person(std::string, int);
	std::string get_name();
	int get_age();
	void greet();
	~Person();

};
#endif