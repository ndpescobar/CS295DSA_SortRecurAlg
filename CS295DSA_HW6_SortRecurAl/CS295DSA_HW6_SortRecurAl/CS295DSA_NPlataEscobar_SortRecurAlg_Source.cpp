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

//------ Variable/Method Declarations ------
int arrA[8] = {3,2,1,10,11,12,20,15};

void MergeSort(int arr[], int left, int right);
void InsertionSort();

//------ MAIN ------
int main() {
	
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

}

/*	Insertion Sort

*/
void InsertionSort() {

}