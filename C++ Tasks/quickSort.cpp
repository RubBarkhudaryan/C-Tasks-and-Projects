#include <iostream>
#include <cstdlib>
#include <climits>
#include <ctime>

template <typename T>
int partition(T array[], int start, int end)
{
	T pivot = array[end];
	int i = start - 1;

	for (int j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	i++;

	int temp = array[i];
	array[i] = array[end];
	array[end] = temp;

	return i;
}

template <typename T>
void quickSort(T array[], int start, int end)
{
	if (end <= start)
		return;
	int pivot = partition(array, start, end);
	quickSort(array, start, pivot - 1);
	quickSort(array, pivot + 1, end);
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
	int* arr;

	do {
		std::cout << "n = ";
		std::cin >> n;
	} while (n <= 1 || n > INT_MAX);

	arr = new int[n];

	generateArray(arr, n);
	printArr(arr, n);
	quickSort(arr, 0, n - 1);
	printArr(arr, n);

	delete[] arr;
	return 0;
}
*/