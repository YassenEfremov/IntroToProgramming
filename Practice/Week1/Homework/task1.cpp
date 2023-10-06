#include <iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			// top and bottom of square
			for (int j = 0; j < n; j++) std::cout << n;
		} else {
			// middle (sides) of square
			for (int j = 0; j < n; j++) {
				if (j == 0 || j == n - 1) {
					std::cout << n;
				} else {
					std::cout << " ";
				}
			};
		}
		std::cout << "\n";
	}

	return 0;
}
