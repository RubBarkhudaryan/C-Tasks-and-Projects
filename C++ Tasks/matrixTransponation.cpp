#include <iostream>
using namespace std;

void MatrixTranponation() {

	int matrix[5][10];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> matrix[i][j];
		}
	}


	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}

}

/*
int main() {

	MatrixTranponation();

	return 0;
}
*/
