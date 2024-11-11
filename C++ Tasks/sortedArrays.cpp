#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void SortedArrays() {

	vector <int> arr1, arr2, generalArr;

	int element;

	for (int i = 0; i < 10; i++) {
		cin >> element;
		arr1.push_back(element);
	}

	for (int i = 0; i < 10; i++) {
		cin >> element;
		arr2.push_back(element);
	}

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	for (int i = 0; i < 10; i++) {
		generalArr.push_back(arr1[i]);
		generalArr.push_back(arr2[i]);
	}

	sort(generalArr.begin(), generalArr.end());

	for (auto element : generalArr) {
		cout << element << " ";
	}

}

/*
int main() {

	SortedArrays();

	return 0;
}
*/