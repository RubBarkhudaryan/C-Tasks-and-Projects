#include <iostream>

void MatrixSubtraction() {
	int matrix1[6][6], matrix2[6][6];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			std::cin >> matrix1[i][j];
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			std::cin >> matrix2[i][j];
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			std::cout << matrix1[i][j] - matrix2[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


/*
int main() {

	MatrixSubtraction();

	return 0;
}
*/