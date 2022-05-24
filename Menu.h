#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Alcoholic.h"
#include "Customer.h"
#include "Bartender.h"
#include "Non-Alcoholic.h"
#include "Food.h"

class Menu{
	
	Drink** list_of_drinks;
	Food list_of_food[3];
	int num_drinks;

public:
	Menu(); // Default constructor
	void set_drinks(Bartender); // Allows the bartender to prepare the drink/ fill in list_of_drinks array. Database of drink is in Drink.csv
	void set_food(Bartender);
	void main_menu(); // A statically written message for customer to interact with
	void module(Customer, Bartender); // Where all main calculation and interaction happens, the parameter will receive a response, a customer and a bartender
	void A_drink(); // Print out the list of drinks 
	void A_food(); // Print out the list of food
	void welcome_message(int, Customer); // A message at the beginning of program
	void essential_info(Customer); // Output user relevant information
	void validate(int);
	int prompt_age();
	std::string prompt_name();
    ~Menu(); // Destructor to delete list_of_drinks


};
#endif
