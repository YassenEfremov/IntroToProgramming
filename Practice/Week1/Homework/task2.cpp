#include <iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			// tip of triangle
			std::cout << n;
		} else if (i > 0 && i < n - 1) {
			// middle (sides) of triangle
			for (int j = 0; j < i + 1; j++) {
				if (j == 0 || j == i) {
					std::cout << n;
				} else {
					std::cout << " ";
				}
			};
		} else if (i == n - 1) {
			// bottom of triangle
			for (int j = 0; j < n; j++) std::cout << n;
		}
		std::cout << "\n";
	}

	return 0;
}
