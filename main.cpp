#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Bartender.h"
#include "Alcoholic.h"
#include "Menu.h"
#include "Drink.h"

int main(){
	Customer *c1 = new Customer("William", 19);
	Bartender *b1 = new Bartender("Jack", 28);

	std::cout << c1->get_name()<< std::endl;
	std::cout << c1->get_age() << std::endl;

	int choice;
	Menu main;
	std::cout << " You have " << c1->return_money() << " dollars. ";
	std::cout << "Your drunk level is " << c1->how_drunk() << ". Don't go too crazy or we will kick you out" << std::endl;
	main.main_menu();
	std:: cin >> choice;
	main.main_module(choice, *c1, *b1);

	delete c1;
	delete b1;

}