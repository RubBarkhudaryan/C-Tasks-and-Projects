#include <iostream>
using namespace std;

inline void void_rectangle() {
	int n, m;

	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			for (int j = 0; j < m; j++) {
				cout << "* ";
			}
			cout << endl;
		}
		else {
			cout << "*";
			for (int j = 0; j < m*2-3; j++) {
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
}