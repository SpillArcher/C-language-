#include <stdio.h>
#include <stdlib.h>

int area(int *length,int width){
    length =100;

return *length*width;

}


int main()
{
  int a =50;
  int b =100;

int *ptr;
ptr=&a;

int sum=*ptr*b;
  printf("Area of shape %d length and %d width = %d\n",*ptr,b,sum);

  printf("Address of length = %p ",ptr);
    return 0;
}
