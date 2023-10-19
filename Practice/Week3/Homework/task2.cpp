#include <iostream>

int main() {

	int n = 5;	// can also be done with dynamic memory and std::cin
	std::cout << "Enter 5 numbers, each on a new line:\n";
	int arr[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int k;
	std::cin >> k;

	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			for (int j = i - 1; j >= 0; j--) {
				int c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	return 0;
}
