#include <iostream>

int main() {

	int number;

	std::cout << "Enter the number: ";
	std::cin >> number;
	std::cout << std::endl;

	if(number % 2 == 1) {
		std::cout << "This number is odd.\n";
	}

	else {
		std::cout << "This number is even.\n";
	}

	return 0;
}
