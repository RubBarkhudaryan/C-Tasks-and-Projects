#include <iostream>
using namespace std;

long long DecimalToBinary(unsigned int n) {
	long long binary = 0;
	long long degree = 1;

	while (n) {
		binary += (n % 2) * degree;
		degree *= 10;
		n /= 2;
	}

	return binary;
}

/*
int main() {

	unsigned int n;
	cin >> n;

	long long binary = DecimalToBinary(n);

	cout << binary;

	return 0;
}
*/