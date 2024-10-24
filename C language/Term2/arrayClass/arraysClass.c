/**###############################
#  AUTHOR  - STEPHEN EKWE        #
#  SUBJECT - SOFTWARE DESIGN 1   #
#  TOPIC   - ARRAYS              #
#  CODE    - SDN150S             #
###############################**/

/// HEADER FILES
#include <stdio.h>
#include <stdlib.h>

/** ARRAYS -
Arrays are data structure that can store a fixed-size sequential collection of elements of the same type.
It consist of contiguous/sequential memory locations.
The lowest address corresponds to the first element and the highest address to the last element.

They are Single-dimensional array or multi-dimensional array.
Most popular multi-dimensional arrays are; 2D-arrays and 3D-arrays.
**/
/** PASSING ARRAY TO FUNCTION -
When passing a single or multidimensional array as an argument in a function,
you would have to declare a formal parameter in one of three ways:

a) as pointer: void myFunction(int *param)
               { // body of function }

b) as sized-array: void myFunction(int param[size])
               { // body of function }

c) as unsized-array:  void myFunction(int param[])
               { // body of function }
**/

/** Global Declaration **/
// Function Declaration/Signature/Prototype
// Changed to return double* for dynamically allocated memory
double* Check_sum(int age[3][3], int rows, int cols);

int main()
{
    /** SINGLE-DIMENSIONAL ARRAY **/
    double balance[7] = {100.0, 45.7, 39.3, 3.4, 2.3, 78.5, 20.3}; // Fixed size
    printf("\n-ACCESS ELEMENT 1D-ARRAY USING LOOP & INDEX-\n");
    for (int k = 0; k < 7; k++)   // Changed to 7 to match array size
    {
        printf("balance[%d] = %.2lf\n", k, balance[k]);
    }
    double salary = balance[4];
    printf("\n-PEEK @ ELEMENT USING INDEX-\n");
    printf("Salary = %.2lf\n", salary);
    printf("balance[4] = %.2lf\n\n", balance[4]);

    /** TWO-DIMENSIONAL ARRAY **/
    int age[3][3] = {{24, 36, 23}, {23, 22, 56}, {43, 67, 32}};
    printf("\n-ACCESS ELEMENT 2D-ARRAY USING NESTED LOOP & INDEX-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("AGE[%d][%d] = %d\n", i, j, age[i][j]);
        }
    }
    int Ben_age = age[2][0];
    printf("\n-PEEK @ ELEMENT USING INDEX-\n");
    printf("Ben is %d years old\n", Ben_age);

    /** PASSING ARRAY TO FUNCTION **/
    double *Row_result = Check_sum(age, 3, 3);
    printf("\n-PASS & RETURN 2D-ARRAY FROM FUNCTION-\n");
    printf("Sum Result = %.2lf\n", Row_result[0]); // Correct usage
    printf("Sum Result = %.2lf\n", Row_result[1]);
    printf("Sum Result = %.2lf\n", Row_result[2]);

    free(Row_result); // Free the dynamically allocated memory

    return 0;
}

// Function Definition - returns a pointer to a dynamically allocated array
double* Check_sum(int age[3][3], int rows, int cols)
{
    double* result = (double*)malloc(rows * sizeof(double)); // Dynamically allocate memory
    for (int i = 0; i < rows; i++)
    {
        result[i] = 0; // Initialize sum
        for (int j = 0; j < cols; j++)
        {
            result[i] += age[i][j];
        }
    }
    return result; // Return pointer to the array
}
