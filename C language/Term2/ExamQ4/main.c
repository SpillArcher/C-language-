#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {

int temp = *a;

*a = *b;

*b = temp;

}



/** MAIN FUNCTION **/

int main() {

  int x, y;

  printf("Enter two integers: ");

  scanf("%d %d", &x, &y);



  swap(&x, &y);



  printf("Swapped values: x = %d, y = %d\n", x, y);

  return 0;

}
