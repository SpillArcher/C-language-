#include <stdio.h>
#include <stdlib.h>

///Wrote in c to store elements in a array and print(first use 1D array and then  use  3D array structure)
///{45.5,76.2,89.0,21.4,34.4,90.0,23.2,45.2,87.4,29.5,37.3,22.2}
int main()
{
   int num[12]={45.5,76.2,89.0,21.4,34.4,90.0,23.2,45.2,87.4,29.5,37.3,22.2};

   int a,b;///Local variable for 1D array

   for(a=0 ; a<12; a++)
   {
       num[a]=num[2];
   }
   for(b=0 ; b<12 ; b++)
   {
       printf("Ben is %d years old\n",num[b]);///print the 1D array
   }

   ///Place entries in 2D array
   double num2[3][4]={45.5,76.2,89.0,21.4,34.4,90.0,23.2,45.2,87.4,29.5,37.3,22.2};

int c,d;///Local variable for 2D

   for(c=0 ;c<3 ;c++)
   {

   for(d=0;d<4;d++)
   {

     printf("Element[%d][%d] = %.2f\n",c,d,num2[c][d]);///Print the 2D array
   }}


   ///Place entries in 3D
   double num3[2][3][2]={45.5,76.2,89.0,21.4,34.4,90.0,23.2,45.2,87.4,29.5,37.3,22.2};

   int x,y,z;///local variable definition for 3D

   for(x=0;x<2;x++)
   {
       for(y=0;y<3;y++)
       {
           for(z=0;z<2;z++)
           {
               printf("Element[%d][%d][%d] = %.2lf\n",x,y,z,num3[x][y][z]);///Print the 3D array
           }
       }
   }
    return 0;
}
