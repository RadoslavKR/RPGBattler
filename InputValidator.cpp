#include<string>
#include <iostream>
#include <exception>

#include "InputValidator.h"
#include "Algorithms.h"

unsigned int inputNumberOptions(unsigned int maxNum)
{
	std::string userInput;
	std::cin >> userInput;

	if (userInput.size() > findNumberOfDigits(maxNum)) {
		throw std::logic_error("Invalid input please type one of the displayed numbers:\n");
	}

	unsigned int number;
	try {
		number = std::stoi(userInput);
	}
	catch (const std::exception& e) {
		throw std::logic_error("Invalid input please type one of the displayed numbers:\n");
	}

	if (number < 1 || number > maxNum) {
		throw std::logic_error("Invalid input please type one of the displayed numbers:\n");
	}

	return number;
}
