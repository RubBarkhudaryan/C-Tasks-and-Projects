#include <iostream>

void ClosestToZero() {

	int n;
	std::cin >> n;

	int* arr;
	arr = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}


	int min = 999;
	int new_min{};
	int min_1 = 0, min_2 = 0;

	for (int i = 0; i < n-1; i++) {
		for (int j = 1; j < n; j++) {
			new_min = arr[i] + arr[j];

			if (abs(min) > abs(new_min)) {
				min = new_min;
				min_1 = arr[i];
				min_2 = arr[j];

			}
		}
	}

	std::cout << min_1 << " " << min_2;
}


/*
int main() {

	ClosestToZero();

	return 0;
}
*/