#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
  double interval;
  int i;
  printf("\n++++++++++++++++\n");
  for(i = 0; i <30; i++)
  {
     interval = i/10.0;
     printf("sin(%.1lf) = %.3lf \t", interval, fabs(sin(interval)));
     printf("\n++++++++++++++++\n");
  }


  return 0;
}
