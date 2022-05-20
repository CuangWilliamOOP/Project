#include "Menu.h"
#include <fstream>
#include <sstream>

Menu::Menu(){}
void Menu::main_menu(){

	std::cout << "1. List of drinks" << std::endl;
	std::cout << std::endl;
	std::cout << "Press 0 or any letters to exit" << std::endl;
	std::cout << "Enter the number or to navigate around the program: ";
}

void Menu::module(int choice, Customer a, Bartender b){

	this -> set_drinks(b);

	while(choice == 1 || choice == 2 || choice < 0 || choice > 2 || choice == 0){
		if(choice == 1){

			int general_response;
			std::cout << std::endl;
			this -> A_drink();
			std::cin >> general_response;
			std::cout << std::endl;

			while(std::cin.fail()){
				std::cout << "Error, try again: ";
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cin >> general_response;
				std::cout << std::endl;
			}

			while(general_response < 0 || general_response > num_drinks){
				std::cout << "Invalid input, try again: " << std::endl;
				std::cin >> general_response;
				while(std::cin.fail()){
					std::cout << "Error, try again: ";
					std::cin.clear();
					std::cin.ignore(256, '\n');
					std::cin >> general_response;
					std::cout << std::endl;
				}
			}



			while(general_response >= 0 || general_response <= num_drinks){
				if(general_response == 0){
					break;
				}else{
					list_of_drinks[general_response-1]->brew();
					if(list_of_drinks[general_response-1]->get_count() > 0){
						a.buy_drink(list_of_drinks[general_response-1]->get_price());
						a.drink(list_of_drinks[general_response-1]->get_drunk_level());
						a.greet();
						b.greet(a.how_drunk());
						break;
					}else{
						std::cout << "Bartender: We ran out of " << list_of_drinks[general_response-1]->get_name() << std::endl;
					}
					break;
				}
			}

		}else if(choice == 0){
			std::cout << "Come again" << std::endl;
			break;

		}else if(choice >= 2 || choice < 0){
			while(choice >= 2 || choice < 0){
				std::cout << "Invalid number, try again.";
				std::cin >> choice;
			}

		}else{
			std::cout << "Invalid input, try again: ";
			std::cin >> choice;
		}

		if(a.how_drunk() >= 100){
			std::cout << "Bartender: You're too drunk, go home" << std::endl;
			break;
		}

		std::cout << std::endl;
		std::cout << "Money: " << a.return_money() << std::endl;
		std::cout << "Drunk level: " << a.how_drunk() << std::endl;
		this-> main_menu();
		std::cin >> choice;
	}
}

void Menu::A_drink(){
	for(int i = 0; i < num_drinks; i++){
		std::cout << i+1<<". "<< list_of_drinks[i]->get_name() << " ($" << list_of_drinks[i]->get_price() << ")" << std::endl;
	}
	std:: cout << "Choose your drink with numbers on the list or press any other number to return to main menu: ";
}

void Menu::set_drinks(Bartender){
	// name, drunk_level, count, prize, maximum
	std::fstream drink_file("Drink.csv");
	if (drink_file.is_open()){
		std::string line;
		num_drinks = 0;
		while(std::getline(drink_file, line)){
			num_drinks++;
		}

		// Make getline start from beggining
		drink_file.clear();
		drink_file.seekg(0);


		list_of_drinks = new Drink*[num_drinks];
		for(int j= 0; std::getline(drink_file, line); j++){
			if(line == "")continue;
			std::string col;
			std::string array[6];
			std::stringstream stream(line);
			for(int i=0; std::getline(stream, col, ','); i++){
				array[i] = col;
			}
			if(array[5] == "y"){
				list_of_drinks[j] = new Alcoholic(array[0], std::stoi(array[1]), std::stoi(array[2]), std::stoi(array[3]), std::stoi(array[4])); 
			}else if(array[5] == "n"){
				list_of_drinks[j] = new Non_Alcoholic(array[0], std::stoi(array[2]), std::stoi(array[3]), std::stoi(array[4]));
				
			}
		}
	}else{
		std::cout << "Can't open file" << std::endl;
	}

}


Menu::~Menu(){
	for(int i = 0; i < num_drinks; i++){
		delete list_of_drinks[i];
	}
	delete[] list_of_drinks;
}

