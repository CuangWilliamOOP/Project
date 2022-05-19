#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Alcoholic.h"
#include "Customer.h"
#include "Bartender.h"

class Menu{
	
	Drink** list_of_drinks;
	int num_drinks;

public:
	Menu();
	void set_drinks();
	void main_menu();
	void module(int, Customer, Bartender);
	void A_drink();
	void set_drinks(Bartender);
	int calculate(int, Alcoholic);


};
#endif