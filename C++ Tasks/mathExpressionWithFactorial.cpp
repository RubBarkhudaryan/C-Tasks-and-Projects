#include <iostream>
#include <iomanip> 
using namespace std;

double factorial(double n) {
	if (n == 1) {
		return n;
	}
	else {
		return n * factorial(n - 1);
	}
}

double MathExpression(double n) {
	
	double expression = factorial(n) / (n + 1);

	return expression;
}

/*
int main() {

	double total = 0;
	
	for (double i = 1; i <= 10; i++) {
		total += MathExpression(i);
	}

	cout << fixed << setprecision(5) << total;

	return 0;
}
*/
