#include <iostream>
using namespace std;

int SimpleCalculator(int num1, int num2, char operation) {
	switch (operation) {

		case '+':
			return num1 + num2;
			break;

		case '-':
			return num1 - num2;
			break;

		case '*':
			return num1 * num2;
			break;

		case '/':
			return num1 / num2;
			break;

		case '%':
			return num1 % num2;
			break;
	}
}

/*
int main() {
	int num1, num2;
	char operation;

	cin >> num1 >> num2 >> operation;

	int total = SimpleCalculator(num1, num2, operation);

	cout << total;

	return 0;
}
*/
