#include <iostream>
using namespace std;

void SpiralMatrixAsRow() {
	int matrix[6][6];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << endl << endl;

	int currentRow = 0, currentColumn = 5;
	int n = 0;

	while(n < 3){
					
		for (int j = currentRow; j <= currentColumn; j++) {
			cout << matrix[currentRow][j] << " ";
		}

		++currentRow; 

		for (int i = currentRow; i <= currentColumn; i++) {
			cout << matrix[i][currentColumn] << " ";
		}	
		


		for (int j = currentColumn-1; j >= currentRow-1; j--) {
			cout << matrix[currentColumn][j] << " ";
		}

		--currentColumn;

		for (int i = currentColumn; i >= currentRow; i--) {
			cout << matrix[i][currentRow-1] << " ";
		}	

		++n;
	}

}

/*
int main() {

	SpiralMatrixAsRow();

	return 0;
}
*/
