#include "Person.h"

Person::Person(){}
	

Person::Person(std::string name_, int age_){
	*name = name_;
	*age = age_;
}

void Person::greet(){
	std::cout << "G'day m8" << std::endl;
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