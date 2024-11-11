#include <iostream>
using namespace std;

void repeatedElements() {

	int n;
	cin >> n;

	int* arr;
	arr = new int[n];

	int* duplicate;
	duplicate = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bool dup = true;
	int total = 0;

	for (int i = 0; i < n - 1; i++) {

		int count = 1;

		for (int j = i + 1; j < n; j++) {

			if (arr[i] == arr[j]) {
				++count;
			}

		}

		if (count >= 2) {
			for (int c = 0; c < total; c++) {
				if (duplicate[c] == arr[i]) {
					dup = false;
					break;
				}
				else {
					dup = true;
				}
			}

			if (dup) {
				duplicate[total] = arr[i];
				++total;
			}
		}

	}

	for (int i = 0; i < total; i++) {
		cout << duplicate[i] << " ";
	}

	delete[] arr;
	arr = 0;

	delete[] duplicate;
	duplicate = 0;

}


/*
int main() {

	repeatedElements();

	return 0;
}
*/