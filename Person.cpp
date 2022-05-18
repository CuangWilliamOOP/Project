#include "Person.h"

Person::Person(){
	name = nullptr;
	age = nullptr;
}

Person::Person(std::string name_, int age_){
	*name = name_;
	*age = age_;
}

void Person::greet(){
	std::cout << "Howdy m8" << std::endl;
}

std::string Person::get_name(){
	return *name;
}

int Person::get_age(){
	return *age;
}

Person::~Person(){
	delete name;
	delete age;
}