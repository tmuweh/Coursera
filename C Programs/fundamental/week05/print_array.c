#include <stdio.h>

#define SIZE 5

void print_array(int how_many, int array[], char *str);

int main(void){

	int array[SIZE] = {25, 27, 30, 34, 35};

	print_array(SIZE, array, "Ages of Siblings: ");

	return 0;
}

void print_array(int how_many, int array[], char *str){

	printf("%s", str);

	for(int i = 0; i < SIZE; i++)
		printf("%d\t", array[i]);

	printf("\n\n");
}