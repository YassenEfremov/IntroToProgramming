#include <iostream>

int main() {

	int n = 5;	// can also be done with dynamic memory and std::cin
	std::cout << "Enter 5 numbers, each on a new line:\n";
	int arr[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	// insertion sort and find max difference
	int max;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) {
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;

				if (i > 0 && arr[i - 1] - arr[i] > max) {
					max = arr[i - 1] - arr[i];
				}
			}
		}
		if (i == 1) max = arr[i - 1] - arr[i];
	}

	std::cout << max << "\n";
	return 0;
}
