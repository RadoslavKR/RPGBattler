#include<iostream>
#include<print>

#include "GameController.h"
#include "Menues.h"

int main() {
	Pages& currentPage = GameController::instance().getCurrentPage();
	while (true) {
		if (currentPage == Pages::StartMenu) {
			startMenu(currentPage);
		}
		else if (currentPage == Pages::LoginMenu) {

		}
	}
}