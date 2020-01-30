/*	Tangue Muweh
	Preprocessor example
	V1.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX_AGE 65
#define MIN_AGE 25

#define POPULATION 100
#define RANGE 25

#define AGE_OVER rand()%RANGE
#define AGE AGE_OVER + MIN_AGE

#define FILL for (int i = 0; i < POPULATION; ++i)\
					data[i] = AGE

void print_data(int d[], int size)
{
	int i;
	printf("\n\n");
	for (i = 0; i < size; ++i)
	{
		printf("%d\t", d[i]);
		if ( (i+1) % 10 == 0) printf("\n");
	}
}

int main()
{
	int i;
	int data[POPULATION];
	srand(time(0));
	FILL;
	print_data(data, POPULATION);
	printf("\n\n");
	return 0;
}
