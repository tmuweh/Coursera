/*
Code by : Tangue Muweh
Aim: Calculate the Volume of a sphere
Version: 1.0
*/

#include <stdio.h>
#define PI 3.14159

int main(void) {
  double radius;

  printf("Enter Radius: ");
  scanf("%lf", &radius);
  printf("%lf\n", radius);

  //conversion inside the volume calculation. division by a double 3.0 converts result to double.
  printf("Volume is : %lf \n", (4 / 3.0) * PI * radius * radius * radius);
  return 0;
}
