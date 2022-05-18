#include "Person.h"

Person::Person(){
	name = nullptr;
	age = nullptr;
}
std::string Person::set_name(std::string name_){
	*name = name;
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