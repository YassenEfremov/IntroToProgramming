#include <iostream>

int main() {

	int repeating_symbols = 1;
	char prev_symbol = 0;
	while (true) {
		char symbol;
		std::cout << "Enter a symbol: ";
		std::cin >> symbol;

		if (symbol == prev_symbol) {
			repeating_symbols++;
		} else {
			repeating_symbols = 1;
		}

		switch (repeating_symbols) {
		case 2:
			std::cout << "No please don't do it!\n";
			break;
		case 3:
			std::cout << "Don't do this to me!\n";
			break;
		case 4:
			std::cout << "This is your last chance!\n";
			break;
		case 5:
			for (int i = 0; i < 1000000; i++) {
				std::cout << symbol;
			}
			std::cout << "\n";
			repeating_symbols = 0;
			break;
		}

		prev_symbol = symbol;
	}

	return 0;
}
