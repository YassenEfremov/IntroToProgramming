#include <iostream>

int fib(int n) {
	if (n == 1) {
		return 0;
	} else if (n == 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

// a much more efficient alternative that uses default parameter values
int fib_tail_end(int n, int a = 0, int b = 1) {
	if (n == 0) {
		return a;
	} else if (n == 1) {
		return b;
	}
	return fib_tail_end(n - 1, b, a + b);
}

int main() {

	int n;
	std::cin >> n;
	std::cout << fib(n) << "\n";

	return 0;
}
