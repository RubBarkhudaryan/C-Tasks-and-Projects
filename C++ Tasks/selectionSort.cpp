#include <iostream>
#include <cstdlib>
#include <climits>
#include <ctime>

template <typename T>
void selection_sort(T arr[], int length)
{
	for (int i = 0; i < length - 1; i++) {
		int min = i;
		for (int j = i + 1; j < length; j++) {
			if (arr[min] > arr[j])
				min = j;
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

template <typename T>
void generateArray(T array, int n)
{
	srand((unsigned)time(0));
	for (int i = 0; i < n; i++) {
		array[i] = rand() / 100.0;
	}
}

template <typename T>
void printArr(T arr, int length)
{
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

/*
int main(void)
{
	int n;
	int arr[1000];

	do {
		std::cout << "n = ";
		std::cin >> n;
	} while (n <= 1 || n > INT_MAX);

	generateArray(arr, n);
	printArr(arr, n);
	selection_sort(arr, n);
	printArr(arr, n);

	return 0;
}
*/