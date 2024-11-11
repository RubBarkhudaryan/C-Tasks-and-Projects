#include <iostream>
using namespace std;

void HumanHead(char character) {


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

void HumanBody(char character) {


	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 15; j++) {
			cout << character << " ";
		}
		cout << endl;
	}
}

void HumanFoot(char character) {


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

	HumanHead('$');
	HumanBody('#');
	HumanFoot('+');

	return 0;
}
*/
