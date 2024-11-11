#include <iostream>

using namespace std;

void RemoveColumn() {

	int matrix[6][5];

	int k;
	cin >> k;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
		}
	}

	if (k >= 1 && k <= 5) {
		for (int i = 0; i < 6; i++) {
			for (int j = k - 1; j < 4; j++) {
				matrix[i][j] = matrix[i][j + 1];
			}
		}

		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 4; j++) {
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

	RemoveColumn();

	return 0;
}
*/