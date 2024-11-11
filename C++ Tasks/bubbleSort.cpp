#include <iostream>
using namespace std;


void bubbleSort() {

	int n;
	cout << "n = "; cin >> n;

	int* x;
	x = new int[n];

	cout << "Array 'x[]' before bubble sorting process : \n";

	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}

	for(int j = 0; j < n - 1; j++){

		for (int i = 0; i < n - j - 1; i++) {

			/*
			if we need to make bubble sort decrease we need to modify the

			(x[i] > x[i + 1])  to (x[i] < x[i+1])
			*/

			if (x[i] > x[i + 1]) {
				int t = x[i];
				x[i] = x[i + 1];
				x[i + 1] = t;
			}
		}
	}

	cout << "Array 'x[]' after bubble sorting process : \n";

	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	
	delete[] x;
	x = 0;
}


//int main() {
//
//	bubbleSort();
//
//	return 0;
//}