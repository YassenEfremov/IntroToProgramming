#include <iostream>

int main() {

	std::cout << "Enter operation (+,-,*,/), first number and second number, all on new lines\n";

	while (true) {
		int a, b;
		char op;
		std::cin >> op;
		std::cin >> a;
		std::cin >> b;

		if (op == '/' && b == 0) break;

		switch (op) {
		case '+':
			std::cout << "= " << a + b << "\n";
			break;
		case '-':
			std::cout << "= " << a - b << "\n";
			break;
		case '*':
			std::cout << "= " << a * b << "\n";
			break;
		case '/':
			std::cout << "= " << a / b << "\n";
			break;
		}
	}

	return 0;
}
