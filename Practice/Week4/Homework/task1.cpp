#include <iostream>

void print_matrix(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j) {
				std::cout << i << " ";
			} else if (j > i) {
				std::cout << j - i << " ";
			} else {
				std::cout << i * j << " ";
			}
		}
		std::cout << "\n";
	}
}

int main() {

	print_matrix(6, 6);

	return 0;
}
