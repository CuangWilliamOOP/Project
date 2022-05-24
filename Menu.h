#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Alcoholic.h"
#include "Customer.h"
#include "Bartender.h"
#include "Non-Alcoholic.h"

class Menu{
	
	Drink** list_of_drinks;
	int num_drinks;

public:
	Menu(); // Default constructor
	void set_drinks(Bartender); // Allows the bartender to prepare the drink/ fill in list_of_drinks array. Database of drink is in Drink.csv
	void main_menu(); // A statically written message for customer to interact with
	void module(int, Customer, Bartender); // Where all main calculation and interaction happens, the parameter will receive a response, a customer and a bartender
	void A_drink(); // Print out the list of drinks 
    ~Menu(); // Destructor to delete list_of_drinks


};
#endif
