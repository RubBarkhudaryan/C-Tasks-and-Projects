#include <iostream>
#include <cstdlib>
#include <climits>
#include <ctime>

template <typename T>
void merge(T* arr, int left, int mid, int right)
{
	int len1 = mid - left + 1;
	int len2 = right - mid;

	T* leftArr = new T[len1];
	T* rightArr = new T[len2];

	for (int i = 0; i < len1; i++)
		leftArr[i] = arr[left + i];

	for (int i = 0; i < len2; i++)
		rightArr[i] = arr[mid + 1 + i];

	int right_ind = 0;
	int left_ind = 0;
	int ind = left;

	while (left_ind < len1 && right_ind < len2)
	{
		if (leftArr[left_ind] <= rightArr[right_ind]) {
			arr[ind] = leftArr[left_ind];
			++left_ind;
		}
		else {
			arr[ind] = rightArr[right_ind];
			++right_ind;
		}
		++ind;
	}

	while (left_ind < len1)
	{
		arr[ind] = leftArr[left_ind];
		++left_ind;
		++ind;
	}

	while (right_ind < len2)
	{
		arr[ind] = rightArr[right_ind];
		++right_ind;
		++ind;
	}

	delete[] leftArr;
	delete[] rightArr;
}

template <typename T>
void mergeSort(T* arr, int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		merge(arr, left, mid, right);
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
	mergeSort(arr, 0, n - 1);
	printArr(arr, n);

	return 0;
}
*/