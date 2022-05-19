#ifndef PERSON_H
#define PERSON_H
#include <iostream>


class Person{
protected:
	Person();
	Person(std::string name_, int age_);  // Constructor
	std::string name;
	int age;
public:
	std::string get_name(); // Return person name
	int get_age(); // return person age
	virtual void greet(); // displays greeting message
	

};
#endif