/*
	Tangue Muweh
	swap two Integers
	V1.0
*/

#include <stdio.h>

#ifndef SIZE
#define SIZE 10
#endif

void swap( int *a, int *b);

int main()
{
	int grades[SIZE] ={20, 13, 45, 6, 34, 19, 68, 90, 23, 7};

	//Print array before swap
	printf("Array before swap for first two elements\n");
	for(int i = 0; i < SIZE; i++) {
		printf("%d\t",  grades[i]);
	}
	//call of swap function
	swap(&grades[0], &grades[1]);
	printf("\n");
	//print array after swap 
	printf("Array after swap for first two elements\n");
	for(int i = 0; i < SIZE; i++) {
		printf("%d\t",  grades[i]);
	}
	printf("\n");
	return 0;
}


void swap(int *a, int *b){
	//temporal variable to hold values
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}