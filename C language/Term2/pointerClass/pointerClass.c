/**###############################
#  AUTHOR  - STEPHEN EKWE        #
#  SUBJECT - SOFTWARE DESIGN 1   #
#  TOPIC   - POINTER             #
#  CODE    - SDN150S             #
###############################**/

/// HEADER FILES
#include <stdio.h>
#include <stdlib.h>


/// Function declaration & definition
int Add(int *x, int y)
{
    *x = 20;  /// modify value in pointer memory address location
    return (*x + y);
}


int main()
{
    /// declare local variables
    int age = 18;               /// integer type
    char name[4] = "Adam";      /// sized array
    /**
    Note the the ampersand (&) returns the address to
    the pointer (ptr). This output below compares the address
    and value of both variables.

    Pointer Syntax: type * pointer_name **/

    /// Assigning pointer to variable address
    int* ptr_1 = &age;
    char* ptr_2 = &name;

    /// Access the pointer variable
    printf("ptr_1 address = %p | ptr_1 value = %d\n", ptr_1,*ptr_1);
    printf("ptr_2 address = %p | ptr_2 value = %c\n\n", ptr_2,*ptr_2);

    /// check size of array
    int size = sizeof(name)/sizeof(name[0]);

    printf("Size of Array = %d\n",size);

    for(int i =0; i<size; i++)
    {
      printf("ptr_2 address = %p | ptr_2 value = %c\n", (ptr_2+i),*(ptr_2+i));
    }

    printf("\n");  // newline

    /// incremental pointer
    int balance[] = {10,20,45,60,100};   // declare unsized array
    int* ptr;                           // declare pointer
    ptr = &balance;                 // assign variable address to pointer

    int size2 = sizeof(balance)/sizeof(balance[0]); // get size of unsized array

    /// access pointer address incremental pointer
    for(int i = 0; i<size2; i++)
    {
        printf("Pointer address = %p | Array address = %p\n", ptr,&balance[i]);
        printf("Pointer address = %d | Array value = %d \n", *ptr, balance[i]);
        ptr++;
    }


    /// decremental pointer
    int result[] = {78,65,23,98,79,62,82};   // declare unsized array
    int max = 6;                            // declare variable
    int* ptr_3 = &result[max];              // assign variable address to pointer

    printf("\npointer address = %p | value = %d", (ptr_3 - 1), *(ptr_3-1));

    for(int i = max; i>=0; i--)
    {
       printf("\npointer address = %p | value = %d", ptr_3, *ptr_3);
        ptr_3--;
    }

    /// COMPARE POINTERS
    while(ptr_3 == &result[6])
    {
        printf("True\n");
        ptr_3--;
    }

    /// Pointer to Pointer
    char topic[] = "programming";  // declare unsized array
    char* ptr_4 = &topic;          // declare and assign address of array to pointer 1
    char** ptr_5 = &ptr_4;        // declare and assign address of pointer 1 to pointer 2

    printf("\n\nArray address: %p\n",&topic);
    printf("Array value: %c\n",topic[0]);
    printf("Pointer 1 address: %p\n",ptr_4);
    printf("Pointer 1 points to value: %c\n",*ptr_4);
    printf("Pointer 2 address: %p\n",ptr_5);         // address points to pointer 1
    printf("Pointer 2 points to value: %c\n\n",**ptr_5); // pointer 2 points same value as pointer 1

    /// passing pointers to function
    int a, b;
    a = 5; b = 7;
    int* ptr_6 = &a;

    printf("%p | %d",ptr_6,*ptr_6); // printing pointers and value
    int ans = Add(ptr_6,b);        // function call
    printf("\nanswer = %d\n",ans); // print answer
    printf("a = %d",a);            // check updated value of a

   return 0;
}


/** Examples you can try
   create a function that return the area of a rectangle
   length = 10 and width = 25;
   passing pointers as am argument to the function
   change the original length = 25;
**/
