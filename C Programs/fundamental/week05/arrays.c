/*
  Tangue Muweh
  Arrays
  void1.0
*/

#include <stdio.h>
#include <math.h>


int main(void) {
    int num[10];
    int i;
    int sum = 0.0;
    int product = 1; //prevent default zero
    for (i = 0; i < 10; i++) {

       num[i] = 1; //initialize all arrays with one
    }
    for (i = 0; i < 10; i++) {

      sum = sum + num[i];
      product = product * num[i];
    }
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
  return 0;
}
