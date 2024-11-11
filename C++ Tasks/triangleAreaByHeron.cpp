#include <iostream>
#include <cmath>

using namespace std;

double TriangleArea(double num1, double num2, double num3) {

	double p = (num1 + num2 + num3) / 2;

	double s = sqrt(p * (p - num1) * (p - num2) * (p - num3));

	return s;
}
/*
int main() {
	double num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	cout << TriangleArea(num1, num2, num3);

	return 0;
}
*/