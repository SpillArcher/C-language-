#include <stdio.h>
#include <stdlib.h>

int main()
{
   int binaryNumber[15];
   int decimalNumber;
   int i=0;

   printf("Enter decimal value :");
   scanf("%d",&decimalNumber);

   while(decimalNumber > 0)
   {
       binaryNumber[i]=decimalNumber %2 ;
       decimalNumber /=2;
       i++;
   }
   printf("Binary Number :");
   for(int j = i-1;j>=0;j--){

   printf("%d",binaryNumber[j]);
   }

    return 0;
}
