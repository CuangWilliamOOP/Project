#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Bartender.h"
#include "Alcoholic.h"
#include "Menu.h"
#include "Drink.h"
#include <ctime>

int main(){
	srand(time(NULL));
	Menu main;
	std::string name = "William";
	int age = 19;
	Customer *c1;
	Bartender *b1;


	if(age >= 19){
		c1 = new Customer(name, age);
		b1 = new Bartender("Jack", 28);

		main.welcome_message(1, *c1);
		main.module(*c1, *b1);

		delete c1;
		delete b1;
	}else{
		main.welcome_message(2, *c1);
	}

}