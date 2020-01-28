/*
  The X-ROOT of X
  V 1.0
  Tangue Muweh
  "Calculates the X root of any given number x using recursion"
*/
#include <stdio.h>

int x_root(int number, int root);

int main(void){
  int number = 0, root = 0;
  printf("Enter A number followed by it root to calculate the amount: (ex 4 2 = 16):" );
  scanf("%d%d", &number, &root );
  printf("%d Root of %d is: %d\n", root, number, x_root(number, root));
  return 0;
}

int x_root(int number, int root){

    if( root <= 1){
      if(root == 0)
        return 1;
      return number;
    }

    return number * x_root( number, root - 1);

}
