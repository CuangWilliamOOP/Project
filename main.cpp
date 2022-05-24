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
	std::string name;
	int age;
	std::cout << "Please Enter your name and age: ";
	std::cin >> name;
	std::cin >> age;

	if(age >= 19){
		Customer *c1 = new Customer(name, age);
		Bartender *b1 = new Bartender("Jack", 28);

		std::cout << "Hi " << c1->get_name()<< ". Welcome to OOP Bar club" << std::endl << std::endl;

		int choice;
		Menu main;
		std::cout << "You have " << c1->return_money() << " dollars. ";
		std::cout << "Your drunk level is " << c1->how_drunk() << ". Don't go too crazy!" << std::endl;
		main.main_menu();
		std:: cin >> choice;
		main.module(choice, *c1, *b1);

		delete c1;
		delete b1;
	}else{
		std::cout << "You have to be 19 or above, get out."<< std::endl;
	}

}