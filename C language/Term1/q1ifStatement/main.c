#include <stdio.h>
#include <stdlib.h>
/**
int main()
{
   double num = 0.0;

   printf("Enter value :");
   scanf("%lf",&num);

   if(num > 0.0)
   {
       printf("%.2f -> Number positive\n",num);
   }
   else if(num < 0.0)
   {
       printf("%.2f -> Negative number\n",num);
   }
   else
   {
       printf("%.2f ->Zero\n");
   }
    return 0;
}**/
/**
int main()
{
    char grade;

    printf("Enter result :");

    scanf("%c",&grade);

    switch(grade)
    {
        case 'A':
             printf("EXCELLENT");
        break;

        case 'B':
             printf("Outstanding");
        break;

        case 'C':
            printf("Keep up the good work");
        break;

        default:
            printf("Fail");

            return 0;
    }

}**/
/**
int main()
{
    int divisor;
    int num1;

    printf("Enter value : ");
    scanf("%d",&num1);



    if (num1 %2 == 0)
    {

    if(num1 %3 == 0)
    {
        printf("Number is even ");
    }}

    else{
        printf("Number is odd");
    }

    return 0;
}**/

/**
int main()
{
   char alph;

   printf("Enter letter :");
   scanf("%c",&alph);

   if(alph == 'a' || alph=='e' || alph=='i' || alph== 'o' || alph== 'u')
   {
       printf("%c is a vowel", alph);
   }

   else
   {
       printf("%c is consonant", alph);
   }
    return 0;
}
**/
/**
int main(){

int num1,num2,num3;

 printf("Enter three numbers :");
 scanf("%d %d %d",&num1,&num2,&num3);

 if(num1 > num2  || num1 > num3){

    int max;
    max=num1;

 printf("MAX number = %d\n\n",max);

  if(num2 > num1 || num2> num3)
 {
     printf("MAX number = %d", num2);
 }}
 else
 {
     printf("MAX number = %d", num3);
 }

return 0;
}**/
















