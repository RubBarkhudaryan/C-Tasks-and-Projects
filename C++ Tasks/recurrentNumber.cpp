#include <iostream>
using namespace std;

long long RecurrentNumber(long long num) {
	if (num <= 3) {
		return num;
	}

	else if (num > 3 && num % 2 == 1) {
		return 2 * RecurrentNumber(num + 3);
	}

	else if(num > 3 && num % 2 == 0){
		return 3 + RecurrentNumber(num / 2);
	}
}

/*
int main() {
	long long num;
	cin >> num;

	cout << RecurrentNumber(num);
}
*/