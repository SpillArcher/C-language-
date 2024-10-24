#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define Area(x) (3.141592653589793238462643*(pow((x),2)))



/**
int main()
{
printf("File :%s\n", __FILE__ );
printf("Date :%s\n", __DATE__ );
printf("Time :%s\n", __TIME__ );
printf("Line :%d\n", __LINE__ );
printf("ANSI :%d\n", __STDC__ );

    return 0;
}
**/

/** Example :
               Define a parameterized macro to find the area of a circle
               if the area is low than 50, tell the user to enter a larger radius.**/
int main()
{float value;

do
{


printf("Enter radius: ");

scanf("%f",&value);

float area=Area(value);


printf("Area of %.2f = %.2f\n",value,area);
}while(value>=50);
if(value>=50)
{

}
else
{
    printf("\nAdd Larger radius");
}
return 0;
}
