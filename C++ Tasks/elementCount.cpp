#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void elementCount() {

	int n;
	cin >> n;

	vector <int> arr;

	int element;
	

	for (int i = 0; i < n; i++) {
		cin >> element;
		arr.push_back(element);
	}

	for (int i : arr) {
		cout << std::count(arr.begin(), arr.end(), i) << " ";
	}

}

/*
int main() {

	elementCount();

	return 0;
}
*/
