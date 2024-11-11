#include <iostream>
using namespace std;

void incrementingProgression() {

	int n;
	cin >> n;

	int current, previous, current_len = 1, max_len = 1;

	cin >> previous;

	for (int i = 1; i < n; ++i) {
		cin >> current;

		if (current > previous) {
			current_len++;

			if (max_len < current_len) {
				max_len = current_len;
			}

		}
		else {
			current_len = 1;
		}

		previous = current;
	}

	cout << max_len;

}


/*
int main() {

	incrementingProgression();

	return 0;
}
*/