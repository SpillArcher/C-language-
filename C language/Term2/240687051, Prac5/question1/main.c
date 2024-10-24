#include <stdio.h>
#include <stdlib.h>

/**1. Write a program to calculate the average grade of a student. The grades are stored
in an array. Use a function to calculate the average and return it.**/



float calculateAverage(float arr[],float size)  ///Function to calculate average of grades
{
    float sum=0.0;


    for(int i =0; i<size; i++)
    {
        sum+=arr[i];
    }
    float result;
    result=sum/size;

    return result;
}


int main()
{
    float grade[5]= {70.5,50.89,20.32,100.0,88.33};  ///Grades of students

    float size=sizeof(grade)/sizeof(grade[0]);   ///Calculating size of array

    float average;

    average=calculateAverage(grade,size);    ///Calling back the function



    printf("Average marks of students = %.2f\n",average); ///print output of average grades
    return 0;
}
