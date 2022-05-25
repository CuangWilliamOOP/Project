#include <iostream>
#include "Person.h"
#include "Customer.h"
#include "Bartender.h"
#include "Alcoholic.h"
#include "Menu.h"
#include "Drink.h"
#include <ctime>

int main(){
	srand(time(NULL)); // To randomize index choosing for responses
	Menu* main = new Menu; // Create a new object main
	main->starting_module(); // Module to start the program

	
	delete main;

}