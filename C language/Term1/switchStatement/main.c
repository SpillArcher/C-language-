#include <stdio.h>
#include <stdlib.h>
/**
int main()
{
   int num;


printf("Enter number :");
scanf("%d", &num);

switch ( num)
{
    case 1 : printf("MONDAY");
    break;
    case 2 : printf("TUESDAY");
    break;
    case 3 : printf("WEDNESDAY");
    break;
    case 4 : printf("THURSDAY");
    break;
    case 5 : printf("FRIDAY");
    break;
    case 6 : printf("SATURDAY");
    break;
    case 7 : printf("SUNDAY");
    break;

    default:
        printf("INPUT INVALID!!!");
}

    return 0;
}**/
/**
int main()
{
    char alph;

    printf("Enter letter :");
    scanf("%c", &alph);

    switch(alph)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel", alph);
        break;

     default : printf("%c is a consonant", alph);
    }
    return 0;
}**/
/**
int main()
{
    int num1;
    int num2;
    char arith;
    int result1,result2,result3,result4;

    printf("Enter character operator: ");
    scanf("%c",&arith);

    printf("Enter first number :");
    scanf("%d %d",&num1,&num2);


   result1=num1 +num2;
   result2=num1-num2;
   result3=num1*num2;
   result4=num1/num2;


    switch(arith)
    {
        case '+':
             printf("Answer is %d",result1);
        break;
        case '-':
            printf("Answer is %d",result2);
        break;
        case '*':
             printf("Answer is %d",result3);
        break;
        case '/':
            printf("Answer is %d",result4);
        break;

    }



    return 0;
}
**/

int main()
{
    int ID[10]={1,2,3,4,5,6,7,8,9,0};
    int pass[4]={1,2,3,4};

    printf("Enter ID :");
    scanf("%d", &ID);



   switch(ID[10])
    { case 1234567890:printf("good");
    default:
        printf("INVALID INPUT(You should have 10 digits}\n\n");
    }

    printf("Enter password :");
    scanf("%d",&pass[4]);

    switch(pass[4])
    {
    default:
        printf("INVALID INPUT(You should have 4 inputs");
    }



    return 0;
}

