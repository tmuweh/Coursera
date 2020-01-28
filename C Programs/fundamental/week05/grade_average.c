#include <stdio.h>
#include <math.h>


int main(void) {
    int num[10] = {80, 97, 34, 60, 45, 70, 100, 50, 70, 67};
    int i;
    double sum = 0.0;

    printf("Your Grades are: ");
    for (i = 0; i < 10; i++) {
      printf("%d\t", num[i]);
      sum = sum + num[i];
    }

    printf("Average Is: %f\n", sum/10);
  return 0;
}
