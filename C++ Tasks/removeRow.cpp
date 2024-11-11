#include <iostream>

using namespace std;

void RemoveRow() {

	int matrix[6][5];

	int k;
	cin >> k;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
		}
	}

	if (k >= 1 && k <= 6) {
		for (int i = k-1; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				matrix[i][j] = matrix[i + 1][j];
			}
		}

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}

	else {
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 5; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
}

/*
int main() {

	RemoveRow();

	return 0;
}
*/