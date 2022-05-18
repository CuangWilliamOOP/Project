#include "Customer.h"


Customer::Customer(std::string name_, int age_){
	*name = name_;
	*age = age_;
	
}

void Customer::greet(){
	if(drunk_level > 50){
		std::cout << "You: Give me more!" << std::endl;
	}else if(drunk_level == 0){
		std::cout << "You: The weather was nice wouldn't you say?" << std::endl;
	}else if(drunk_level == 100){
		std::cout << "You: *zzzz* " << std::endl;
	}
}

int Customer::buy_drink(int price){
	money = money - price;
	if(money < 0){
		money = money + price;
		std::cout << "You do not have enough money to buy that drink" << std::endl;
		return money;
	}else{
		return money;
	}
	
}

int Customer::drink(int x){
	drunk_level = drunk_level + x;
	if(drunk_level > 100){
		drunk_level = drunk_level - x;
		std::cout << "Whoops, you're too drunk to take anymore" << std::endl;
		return drunk_level;
	}else if(drunk_level < 0){
		drunk_level = 0;
		std::cout << "You are sober, too sober in fact" << std::endl;
		return drunk_level;
	}else{
		return drunk_level;
	}
}

int Customer::how_drunk(){
	return drunk_level;
}

int Customer::return_money(){
	return money;
}