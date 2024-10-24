#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>



/*struct Marvel{
    char Title[20];
    char Author[20];
    int pages;



}book;
int main()
{
    strcpy(book.Title,"Spiderman");
    strcpy(book.Author, "Anthony Joseph");
    book.pages=70;


    printf("Title: %s\n",book.Title);
    printf("Author: %s\n",book.Author);
    printf("Number of pages in the above book : %d",book.pages);


    return 0;
}*/
/**Using structs to perform the following operation (Real + Imaginery):
a) A-B
b)A + C - B + C
where:
A = 21.87 + 30j
B= 13.84 + 112.23j
C = 56.12 + 96.16
**/
/**typedef struct {
  double real;
  double imag;
}Complex;

Complex add(Complex a,Complex b)
{
Complex result;
    result.real= a.real + b.real;
    result.imag= a.imag + b.imag;

    return result;
}
Complex subtr(Complex a,Complex b){


    Complex result;

  result.real=a.real-b.real;
  result.imag=a.imag-b.imag;

  return result;
  }


int main()
{
    Complex A= {21.87 , 30.00};
    Complex B= {13.84 , 112.23};
    Complex C= {56.12 , 96.16};

    Complex result1=subtr(A,B);
    printf(" A - B = %.2f - %.2fj\n",result1.real,result1.imag);
  Complex temp1 =add(A,C);
  Complex temp2 =add(B,C);
  Complex result2=subtr(temp1,temp2);

  printf("A + C - B + C = %.2lf + %.2lfj\n",temp1,temp2,result2.real,result2.imag);

}**/
double addition(double a,double b,double c)
{
    double result;

    result=a+b+c;

    return result;
}
double subtract(double a,double b,double c)
{
    double result;

    result=a-b-c;

    return result;
}
double add(double a,double b,double c)
{
    double result;

    result=a*b*c;

    return result;
}
double multiply(double a,double b,double c)
{
    double result;

    result=a+b+c;

    return result;
}
double division(double a,double b,double c)
{
    double result;

    result=a/b/c;

    return result;
}
double average(double a,double b,double c)
{
    double result;

    result=(a+b+c)/3;

    return result;
}

int main()
{
    double A,B,C;
    int numbers;
    double add,sub,mul,div,avg;

    printf("Enter 3 values of your choice :");
    scanf("%lf %lf %lf",&A,&B,&C);

    printf("Choose option below:\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Average\n\n Enter option: ");
    scanf("%d",&numbers);

    switch(numbers)
    {
    case 1:
        add=addition(A,B,C);
        printf("Sum of Addition = %.2lf",add);
        break;

    case 2:
        sub=subtract(A,B,C);
        printf("Result of subtraction = %lf",sub);

        break;

    case 3:
        mul=multiply(A,B,C);
        printf("Result of Multiplication = %lf",mul);
        break;

    case 4:
        div=division(A,B,C);
        printf("Result of Division = %.2lf",div);
        break;

    case 5:
        avg=average(A,B,C);
        printf("Result of Average Input = %.2lf",avg);
        break;



    default:printf("\nInvalid option input!!!");
    }
}
