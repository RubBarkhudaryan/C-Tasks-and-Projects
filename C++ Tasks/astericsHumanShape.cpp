#include <iostream>
using namespace std;

void humanHead(char character) {
	

	for (int i = 0; i < 5; i++) {

		for (int k = 0; k < 10; k++) {
			cout << " ";
		}

		for (int j = 0; j < 5; j++) {
			cout << character << " ";
		}
		cout << endl;
	}
}

void humanBody(char character) {


	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 15; j++) {
			cout << character << " ";
		}
		cout << endl;
	}
}

void humanFoot(char character) {


	for (int i = 0; i < 10; i++) {

		for (int k = 0; k < 6; k++) {
			cout << " ";
		}

		for (int j = 0; j < 9; j++) {
			cout << character << " ";
		}
		cout << endl;
	}
}

/*
int main() {

	humanHead('*');
	humanBody('*');
	humanFoot('*');

	return 0;
}
*/