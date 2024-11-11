#include <iostream>
using namespace std;


void InsertionSort() {

	int n;

	cout << "n = "; cin >> n;

	int* x;
	x = new int[n];


	cout << "Array 'x[]' before insertion sorting process : \n";

	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}

	for (int i = 1; i < n; i++) {

		/* the cycle is starting from i = 1 because we are setting the i = 0 element as sorted */

		for (int j = i; j > 0 && x[j - 1] > x[j]; j--) { 

			/*
			j > 0 && x[j-1] > x[j] : while j is bigger than 0 and 
			the element of array x with index j-1 is bigger than with index j : do the swapping process 
			*/

			/* 
			if we need to make insertion sort decrease we need to modify the 

			(x[j-1] > x[j])  to (x[j-1] < x[j])
			*/

			int t = x[j - 1];	/*
								sorting process : swapping elements j and j-1
									*/
			x[j - 1] = x[j];
			x[j] = t;
		}
	}

	cout << "Array 'x[]' after insertion sorting process : \n";

	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}

	delete[] x;
	x = 0;

}

/*
int main() {
	
	InsertionSort();
	
	return 0;
}*/