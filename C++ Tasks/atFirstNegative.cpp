#include <iostream>
using namespace std;

void AtFirstNegative(){

	int n;

	cin >> n;

	int* x;
	x = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (x[j] < 0 && x[j-1] >= 0) {
				int t = x[j - 1];
				x[j - 1] = x[j];
				x[j] = t;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}

	delete[] x;
	x = 0;
}

/*
int main() {

	AtFirstNegative();

	return 0;
}
*/