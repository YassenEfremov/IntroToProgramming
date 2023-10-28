#include <iostream>
#include <cstring>

void reverse_str(char input_str[], char output_str[]) {
	int in_size = std::strlen(input_str);
	for (int i = 0; i < std::strlen(input_str); i++) {
		output_str[i] = input_str[in_size - 1 - i];
	}
	output_str[in_size] = '\0';
}

int main() {

	int n = 3;	// can also be done with dynamic memory and std::cin
	std::cout << "Enter 3 strings (max length 100), each on a new line:\n";
	char concated_str[300] = "";

	for (int i = 0; i < n; i++) {
		char input_str[100];
		char output_str[100];
		std::cin >> input_str;
		reverse_str(input_str, output_str);
		std::strcat(concated_str, output_str);
	}
	std::cout << concated_str << "\n";

	return 0;
}
