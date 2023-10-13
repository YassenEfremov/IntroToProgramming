#include <iostream>

int main() {

	int chislo;
	std::cout << "Enter a number: ";
	std::cin >> chislo;

	int chislo_copy = chislo;
	while (chislo_copy > 0) {
		std::cout << chislo_copy % 10;
		chislo_copy /= 10;
	}
	std::cout << "\n";

	return 0;
}
