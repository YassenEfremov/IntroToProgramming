#include <iostream>

int main() {

	int n = 3;	// can also be done with dynamic memory and std::cin
	std::cout << "Enter 3 numbers, each on a new line:\n";
	int arr[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	while (true) {
		char command;
		int index;
		int number;
		std::cin >> command;
		if (command == 'e') break;
		std::cin >> index;
		std::cin >> number;

		switch (command) {
		case '+':
			arr[index] += number;
			break;
		case '-':
			arr[index] -= number;
			break;
		case '*':
			arr[index] *= number;
			break;
		case '/':
			arr[index] /= number;
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	return 0;
}
