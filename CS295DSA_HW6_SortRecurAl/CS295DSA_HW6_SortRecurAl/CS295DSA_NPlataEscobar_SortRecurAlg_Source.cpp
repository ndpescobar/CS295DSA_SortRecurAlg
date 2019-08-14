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
#include <cstdlib>
#include <iostream>
#include <string>

//------ Variable/Method Declarations ------
void MergeSort(int arr[], int left, int right);
void Merge(int arr[], int left, int mid, int right);
void InsertionSort();

//------ MAIN ------
int main() {
	int arrA[8] = { 3,2,1,10,11,12,20,15 };
	int SIZE_OF_A = sizeof(arrA)/sizeof(arrA[0]);

	MergeSort(arrA, 0, SIZE_OF_A - 1);
	
	std::cout << "Double ENTER to exit." << std::endl;
	std::string exit;
	std::getline(std::cin, exit);
	std::getline(std::cin, exit);
	std::cout << "Goodbye!";
	return 0;
}

//------ Methods ------
/* Merge Sort

*/
void MergeSort(int arr[], int left, int right) {
	// Determine the middle point in arr
	if (left < right) {
		int midpoint = left + (right - left) / 2;
		MergeSort(arr, left, midpoint);
		MergeSort(arr, midpoint + 1, right);
		Merge(arr, left, midpoint, right);
	}
}

/* Merge

*/
void Merge(int arr[], int left, int mid, int right) {
	int i, j, k;
	int leftHalf = mid-(left + 1);
	int rightHalf = right-mid;
	int L[leftHalf], R[rightHalf];
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

/*	Insertion Sort

*/
void InsertionSort() {

}