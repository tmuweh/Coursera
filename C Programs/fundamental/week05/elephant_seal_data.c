/*
	Tangue Muweh
	Calculate Average weight of Elephant seal
	V1.0
*/

#include <stdio.h>
#include <stdlib.h>


int average_elephant_weight(int n , int array[]);

int main(void){

	FILE *fp = fopen("elephant_seal_data.txt", "r");
	int elephant_raw_data[10000]={0}; //initialize array to 0
	
	//check if file was succesfully opened for reading
	if(fp == NULL){

		printf("Failed to open FIle...\n");
		exit(1);
	}
	int counter = 0; //counts number of values in file to allocate size of array to contain!
	while(!feof(fp)){
		
		fscanf(fp, "%d", &elephant_raw_data[counter]);
		counter++;
	}


	printf("\nNumber of elephant_raw_data: %d\n\n", counter - 1);
	printf("average_elephant_seal_weight: %d\n\n", average_elephant_weight(counter, elephant_raw_data) );
	
	fclose(fp);

	return 0;
}


int average_elephant_weight(int n, int array[]){
	int average_weight = 0;
	for(int i = 0; i < n-1; i++)
		//calculate average weight of elephants
		average_weight += (array[i] - average_weight)/(i + 1); //i + 1 because indexing starts from zero

	return average_weight;
}