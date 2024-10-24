#include <stdio.h>
#include <stdlib.h>

/**7. Create a union called "DataValue" with members "integer" (int) and "floatingPoint" (float).
Write a program to read user input and determine whether it represents an integer or a
floating-point number using the union.**/



/// Union declaration named DataValue
typedef union  {
    int integer;
    float floatingPoint;
}DataValue;

int main()
{
     DataValue r;


    printf("Enter a number: ");///prompt user's input

    ///stores users input and displays whatever the outcome is
    if (scanf("%d", &r.integer) == 1)
    {
        printf("Number entered is an integer: %d\n", r.integer);
    }
    else if (scanf("%f", &r.floatingPoint) == 1)
    {
        printf("Number entered is Floating point: %f\n", r.floatingPoint);
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
