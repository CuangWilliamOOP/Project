#ifndef CUSTOMER_H
#define CUSTOMER_H	
#include "Person.h"
#include <cstdlib>

class Customer:public Person{

private:

	
	 int drunk_level = 0;
	 const int max_drunk_level = 100;
	 int money = 200;
	 std::string sober_response[5]; 
	 std::string drunk_response[5];

public:

	Customer(); // Default constructor
	Customer(std::string, int); // Parameterized constructor that accepts name and age
	int buy_drink(int); // Take customer money according to the price of the object they buy
	void greet(); // Greeting messages
	int drink(int); // Modify value of drunk level
	int how_drunk(); // Return drunk level;
	int return_money(); // Return current money;




};
#endif