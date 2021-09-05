#include "QuickSort.h"

int main()
{
   //first generate the a random array after getting the array size as an input from the user
	int* arrPtr;
	int arr[5000];
	srand(time(0));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		arr[i] = rand();
	//now sorting 
	arrPtr = arr;
	sort(arrPtr, 5000);

}

