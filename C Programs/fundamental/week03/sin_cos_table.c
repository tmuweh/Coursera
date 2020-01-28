/*
  Print sine and cosine table between 0 and 1
  Tangue Muweh
  V 1.0

*/

#include <stdio.h>
#include <math.h> // gets cos() and sin() functions here

void print_table(int values); // to print a stable for sine and cosine

int main(void)
{
  int values;

  printf("%s", "Enter of Number of values to print on the table:");
  scanf("%d", &values);
  while (values < 2) { // aleast two values should be availabel use to calculate sin and cos of
    printf("%s", "Enter of Number of values to print on the table:");
    scanf("%d\n", &values);
  }

  print_table(values);

  return 0;
}

// function definition
void print_table(int values) {
  /* code */
  double interval;
  int i;

  printf("X\t\t|SIN(X)\t\t|COSINE(X)\n");
  for(i = 0; i < values; i++)
  {
    printf("_________________________________________\n");

    interval = (i == 0 ? (i + 0.02) : i) / (values + 0.0); // ensures that inverval shouldn't start from 0
    printf("%.3lf\t\t|%.3lf\t\t|%.3lf\n", interval, sin(interval), cos(interval) );
  }
  printf("_________________________________________\n");
}
