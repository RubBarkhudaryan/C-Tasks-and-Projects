#include <iostream>
using namespace std;

int GreatestCommonDivisor(int num1, int num2) {
	if (num2 == 0) {
		return num1;
	}

	else {
		return GreatestCommonDivisor(num2, num1 % num2);
	}
}


/*
int main() {

	int num1, num2;
	cin >> num1 >> num2;

	cout << GreatestCommonDivisor(num1, num2);
}
*/