/*
Tangue Muweh Anselm
Prints the sin of a Value
v 1.0
*/

#include "stdio.h"
#include "math.h"

#define UPPER  1
#define LOWER  0

int main(void) {
  /* code */
  double value = (UPPER + LOWER)/3.0 ;
  printf("Value sin of %lf is %lf\n", value, sin(value));

  return 0;
}
