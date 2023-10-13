#include <iostream>

int main() {

	int n;
	std::cout << "Enter value for n: ";
	std::cin >> n;

	double sum = 0;
	double min;
	double max;
	for (int i = 0; i < n; i++) {
		double chislo;
		std::cin >> chislo;

		sum += chislo;
		if (i == 0) {
			min = chislo;
			max = chislo;
		} else {
			if (chislo > max) max = chislo;
			if (chislo < min) min = chislo;
		}
	}

	std::cout << "Min = " << min << "\n";
	std::cout << "Max = " << max << "\n";
	std::cout << "Avrg = " << (sum / n) << "\n";

	return 0;
}
