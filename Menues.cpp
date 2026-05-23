#include<print>
#include<iostream>

#include "Menues.h"
#include "InputValidator.h"

void startMenu(Pages& currentPage) {
	std::print("Welcome to RPGBattler\nStart Menu\n");
	std::print("1)Login\n2)Register\n3)Exit\n");
	std::print("Please type one of the numbers to select an option:\n");

	unsigned int option;
	while (true) {
		try {
			option = inputNumberOptions(3);
			break;
		}
		catch (const std::logic_error& e) {
			std::cout << e.what();
		}
	}

	if (option == 1) currentPage = Pages::LoginMenu;
	else if (option == 2) currentPage = Pages::RegisterMenu;
	else currentPage = Pages::Exit;
}

void loginMenu(Pages& currentPage) {

}

void registerMenu(Pages& currentPage) {

}