#pragma once

#include <iostream>
/*this function is called in the sort function after sorting an array to print the sorting result*/
static void logSortResult(int* newArr,int arrSize);
static void swap(int* a, int* b);
static void quickSort(int* arr, int low, int high);
static int partition(int* arr, int low, int high);

void sort(int* arr, int arrSize) {
	std::cout << "SORTING STARTED..." << std::endl;
	//storing the old array data
	//now we can start sorting the input array
	quickSort(arr, 0, arrSize - 1);
	std::cout << "FINISHED SORTING..." << std::endl;
	logSortResult(arr, arrSize);
}
static void logSortResult(int* newArr,int arrSize) {
	std::cout << "SHOWING SORTING RESULT..." << std::endl;
	//priting the new array (sorted array) 
	std::cout << "[SORTED ARRAY] = [";
	for (int i = 0; i < arrSize; i++) {
		std::cout << *newArr << ";";
		newArr++;
	}
	std::cout << "]" << std::endl;

	std::cin.get();
}
static void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
static int partition(int* arr, int low, int high)
{
	int pivot = *(arr + high);    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (*(arr + j) <= pivot)
		{
			i++;    // increment index of smaller element
			swap(arr + i, arr + j);
		}
	}
	swap(arr + i + 1, arr + high);
	return (i + 1);
}
void quickSort(int* arr, int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		   at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

