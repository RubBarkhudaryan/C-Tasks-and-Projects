#include <iostream>
using namespace std;

void get_min() {
	
	int a, b, c;
	int& min = a;

	cin >> a >> b >> c;

	if (a > b) {
		min = b;
	}
	if (b > c && a > c) {
		min = c;
	}

	cout << min << endl;

}

void get_max() {

	int a, b, c;
	int& max = a;

	cin >> a >> b >> c;

	if (a < b) {
		max = b;
	}
	if (b < c && a < c) {
		max = c;
	}

	cout << max << endl;

}

/*
int main(){

	get_min();
	get_max();

	return 0;
}
*/
