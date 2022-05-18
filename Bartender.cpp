#include "Bartender.h"


Bartender::Bartender(Person b){
	person = b;
}

void Bartender::greet(){
	std::cout << "Hi, my name is "<< person.get_name()<< " What can I get for you?" << std::endl;
}

int add_drink(){}