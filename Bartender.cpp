#include "Bartender.h"


Bartender::Bartender(std::string name_, int age_){
	*name = name_;
	*age = age_;
}


void Bartender::greet(){
	std::cout << "Hi, what can I get for you?" << std::endl;
}

int add_drink(){}