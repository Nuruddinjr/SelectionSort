#include "libraries.h"

void swap(int * const,int * const);
void selectionSort(int *const ,	const int);

int main(){
	const int arraySize = 10;
	int a[arraySize] = { 1, 52, 7, 2, 12, 43, 5, 44, 76, 100 };
	cout << "Data in original order: " << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << a[i] << endl;
	}
	selectionSort(a, arraySize);
	cout << "Data after sorting: " << endl;
	for (int i = 0; i < arraySize; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

void selectionSort(int * const array, const int arraySize){
	int smallest;
	for (int i = 0, j=arraySize-1; i < j; i++)
	{
		smallest = i;

		for (int index = i+1; index < arraySize; index++)
		{
			if (array[index] < array[smallest])
				smallest = index;

			
		}
		swap(&array[i], &array[smallest]);
	}
}

void swap(int * const ptrOne, int * const ptrTwo){
	int hold = *ptrOne;
	*ptrOne = *ptrTwo;
	*ptrTwo = hold;
}