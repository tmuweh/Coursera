/*
  Tangue Muweh
  Pointers arithmetic
  V1.0
*/

#define SIZE 10

#include <stdio.h>
#include <stdlib.h>

int main() {
  int grades[SIZE] = {1, 2, 3, 4, 5, 6};
  int *ptr;  //pointer that points to an address in memorry
  ptr = grades;
  printf("Grades\tlim\n");
  for(int i = 0; i < SIZE; i++)
    printf("%d\t%ld\n", ptr[i], (long)(ptr + (i * sizeof(long)))); //printing grades and address in memory
  printf("*lim = location in memory\n" );
  return 0;
}
