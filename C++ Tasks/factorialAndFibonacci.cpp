#include <iostream>
#include <iomanip>
using namespace std;


double Factorial(double n) {
	if (n == 1) {
		return n;
	}
	else {
		return n * Factorial(n - 1);
	}
}


double fibonacci(double n) {

	if (n <= 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}


//int main() {
//
//	double n;
//	cin >> n;
//
//	cout << fibonacci(n);
//
//	return 0;
//}