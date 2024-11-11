#include <iostream>
#include <iomanip>
using namespace std;

double ChebyshevPolinomials(int num1, double x) {
	if (num1 == 0) {
		return 1;
	}
	else if(num1 == 1){
		return num1 * x;
	}
	else {
		return 2 * x * ChebyshevPolinomials(num1-1,x) - ChebyshevPolinomials(num1-2,x);
	}
}


/*
int main() {

	int num1;
	double x;

	cin >> num1 >> x;

	cout << fixed << setprecision(5) << ChebyshevPolinomials(num1, x);

	return 0;
}
*/