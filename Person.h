#ifndef PERSON_H
#define PERSON_H
#include <iostream>


class Person{
private:
	Person(std::string name_, int age_); // Constructor
public:
	std::string *name = new std::string; 
	int *age = new int;

	Person(); // Default constructor
	std::string get_name(); // Return person name
	int get_age(); // return person age
	void greet(); // displays greeting message
	~Person(); // destructor

};
#endif