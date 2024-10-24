#include <stdio.h>
#include <stdlib.h>

int main()
{
double arr[12]={45.5,76.2,89.0,21.4,34.4,90.0,23.2,45.2,87.4,29.5,37.3,22.2};


printf("Values in 1D array :  \n");
for(int i=0 ;i <12;i++)
{
    printf("Elemment[%d] = %.2f\n",i,arr[i]);
}

double arr1[3][4]={{45.5,76.2,89.0,21.4},{34.4,90.0,23.2,45.2},{87.4,29.5,37.3,22.2}};

printf("Values in 2D array :  \n");

for(int b=0;b<3;b++)
{
   for(int c=0;c<4;c++)
   {
       printf("Element[%d][%d] =  %.2f\n",b,c,arr1[b][c]);
   }
}

printf("Bob is %.1f years old", arr[2]);
    return 0;
}
