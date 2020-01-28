/*
	Tangue Muweh
	Bubble sort
	V1.0
*/

#include <stdio.h>

#ifndef SIZE
#define SIZE 10
#endif

void swap( int *a, int *b);

int main(void)
{

	int grades[SIZE] ={20, 13, 45, 6, 34, 19, 68, 90, 3, 7};

	//before sort
	printf("Before Sort:\n");
	for(int i = 0; i < SIZE; i++) {
		printf("%d\t",  grades[i]);
	}
	printf("\n");

	int counter; // counts number of swaps in the inner loop(j) per iteration of i lopp
	
	for(int i = 0; i < SIZE; i ++){
		counter = 0; // re-initialize counter to 0 before next iteration
		for(int j = SIZE - 1; j > i; j--)
			if(grades[j-1] > grades[j]){
				counter++;
				swap(&grades[j-1], &grades[j]);
			}
		printf("Counter:%d after iteration: %d\n", counter, i );
		if(counter == 0){
			printf("Already sorted\n");
			break;
		}
	}

	//after sort
	printf("After Sort:\n");
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