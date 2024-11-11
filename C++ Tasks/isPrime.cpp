#include <iostream>
using namespace std;

bool IsPrime(unsigned int n) {

	if (n <= 1) {
		return false;
	}

	bool isPrime = true;

	for (int i = 2; i <= n; i++) {
		if (n % i == 0 && n != i) {
			isPrime = false;
			break;
		}
		else {
			isPrime = true;
		}
	}

	return isPrime;
}

/*
int main() {

	unsigned int n;
	cin >> n;

	bool prime = IsPrime(n);

	if (prime) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
*/
