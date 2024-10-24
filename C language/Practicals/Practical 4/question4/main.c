#include <stdio.h>
#include <stdlib.h>

/**4. Write a program that initializes an array of five float values representing the resistance of five
circuits. Then, use a pointer to iterate through the array and find the average resistance value.
Display the average**/




int main()
{

///Initializing the array of 5 float values
float resistances[5]={ 30.0, 10.0 ,50.0, 1000.0 , 90.00};
float sum=0.0;

float size=sizeof(resistances)/sizeof(resistances[0]);

float *ptr;

///Pointer to resistances
ptr=resistances;

for(int i =0;i<5;i++)
{
    sum+=*(ptr+i);
}

float Average;
///Calculating the average of the initialized floats
Average=sum/size;

///Print Output
printf("Average of resistances = %.2f\n",Average);
    return 0;
}
