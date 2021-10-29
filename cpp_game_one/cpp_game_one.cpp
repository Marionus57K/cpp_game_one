#include <iostream>

void voidFunction(int&) {

}

int returnSumOfNumbers(int a, int b) {
	return a + b;
}

int main() {
	int input{};

	std::cout << "Please enter an integer: ";
	std::cin >> input;

	int result{};
	result = returnSumOfNumbers(input, input + 3);

	std::cout << "The double of " << input << " is " << input * 2 << "\n";
	std::cout << "The triple of" << input << " is " << input * 3 << "\n";
	return 0;
}