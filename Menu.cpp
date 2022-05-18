#include "Menu.h"

Menu::Menu(){}
void Menu::main_menu(){

	std::cout << "1. List of Alcoholic drink" << std::endl;
	std::cout << "2. List of Non-alcoholic drink" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cout << "Enter the number to navigate around the program: ";
}

void Menu::main_module(int choice, Customer a, Bartender b){

	this -> set_drinks(b);

	while(choice == 1 || choice == 2 || choice < 0 || choice > 2 || choice == 0){
		if(choice == 1){
			int general_response;
			std::cout << "Money: " << a.return_money() << std::endl;
			std::cout << "Drunk level: " << a.how_drunk() << std::endl;
			this -> A_drink();
			std::cin >> general_response;
			while(general_response >= 0 || general_response <= 5){
				if(general_response == 0){
					break;
				}if(general_response == 1){
					a.buy_drink(list_of_drinks[1].get_price());
					a.drink(list_of_drinks[1].get_drunk_level());
					a.return_money();
					break;
				}
			}			
		}else if(choice == 0){
			break;
		}else if(choice == 2){
			break;
		}else if(choice > 2 || choice < 0){
			std::cout << "Invalid number, try again: " ;
			std::cin >> choice;
		}
		this-> main_menu();
		std::cin >> choice;
	}
}

void Menu::A_drink(){
	std::cout << "1. Beer" << std::endl;
	std::cout << "2. Vesper" << std::endl;
	std::cout << "3. Margarita" << std::endl;
	std::cout << "4. Bloody Mary" << std::endl;
	std::cout << "5. Martini" << std::endl;
	std:: cout << "Choose your drink with number or press 0 to return to main menu: ";
}

void Menu::set_drinks(Bartender){
	// name, drunk_level, count, prize, maximum
	Alcoholic Beer("Beer", 7, 5, 2, 7);
	Alcoholic Vesper("Vesper", 15, 3, 10, 5);
	Alcoholic Martini("Martini", 16, 4, 8, 5);
	Alcoholic Margarita("Margarita", 10, 4, 12, 4);
	Alcoholic Bloody_Mary("Bloody Mary",5, 5, 10, 5);


	list_of_drinks[0] = Beer;
	list_of_drinks[1] = Vesper;
	list_of_drinks[2] = Margarita;
	list_of_drinks[3] = Bloody_Mary;
	list_of_drinks[4] = Martini;
}
