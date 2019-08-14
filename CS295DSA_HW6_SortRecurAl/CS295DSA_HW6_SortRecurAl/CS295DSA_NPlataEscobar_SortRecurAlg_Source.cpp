/*	CS295 Data Structures and Algorithms
	Homework #06: Sorting and Recursive Algorithms
	This assignment is all about learning insertion and merge sort.

	This program will be able to apply insertion and merge sort to any given array,
	however, one array has been provided.
	@author: Nicolas Plata-Escobar
	@date: 08/01/2019
	@version: 0.1
*/
//------ Include Libraries ------
#include <iostream>
#include <string>

//------ Prototypes ------
void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int left, int mid, int right);
void InsertionSort(int arr[], int n);
void printArray(int arr[], int n);

//------ MAIN ------
int main() {
	int arrA[8] = { 3,2,1,10,11,12,20,15 };
	int sizeof_A = sizeof(arrA)/sizeof(arrA[0]);

	std::cout << "Array A before sorting" << std::endl;
	printArray(arrA, sizeof_A);
	MergeSort(arrA, 0, sizeof_A - 1);
	std::cout << "Array A after sorting" << std::endl;
	printArray(arrA, sizeof_A);

	int arrB[8] = { 3,2,1,10,11,12,20,15 };
	int sizeof_B = sizeof(arrB) / sizeof(arrB[0]);

	std::cout << "Array B before sorting" << std::endl;
	printArray(arrB, sizeof_B);
	InsertionSort(arrB, sizeof_B);
	std::cout << "Array B after sorting" << std::endl;
	printArray(arrB, sizeof_B);
	
	std::cout << "Double ENTER to exit." << std::endl;
	std::string exit;
	std::getline(std::cin, exit);
	std::getline(std::cin, exit);
	std::cout << "Goodbye!";
	return 0;
}

//------ Methods ------
// Merge Sort
void MergeSort(int arr[], int l, int r) {
	// Determine the middle point in arr
	if (l < r) {
		int midpoint = l + (r - l) / 2;
		MergeSort(arr, l, midpoint);
		MergeSort(arr, midpoint + 1, r);
		Merge(arr, l, midpoint, r);
	}
}

//Merge
void Merge(int arr[], int left, int mid, int right) {
	int i, j, k;
	int leftHalf = mid-left + 1;
	int rightHalf = right-mid;
	int* L = new int[leftHalf];
	int* R = new int[rightHalf];
	for (i = 0; i < leftHalf; i++) {
		L[i] = arr[left + i];
	}
	for (j = 0; j < rightHalf; j++) {
		R[j] = arr[mid + 1 + j];
	}
	i = 0;
	j = 0;
	k = 1;
	while (i < leftHalf && j < rightHalf) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	// left half merge
	while (i < leftHalf) {
		arr[k] = L[i];
		i++;
		k++;
	}
	// right half merge
	while (j < rightHalf) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// Insertion Sort
void InsertionSort(int arr[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
	}
	while (j >= 0 && arr[j] > key) {
		arr[j + 1] = arr[j];
		j = j - 1;
	}
	arr[j + 1] = key;
}

// print utility
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}