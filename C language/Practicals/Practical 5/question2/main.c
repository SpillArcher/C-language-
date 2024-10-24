#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/// Function to reverse a string
void reverseString(char *str) {
    if (str == NULL)
        return;

    char *start = str;   /// Pointer to the start of the string

    char *end = str + strlen(str) - 1; /// Pointer to the end of the string

                            /// Swap start and end until the pointers meet each other

        while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char input[50]; ///Length of 50 characters

    printf("Input a string: "); ///Prompt input from user
    scanf("%s", input);         ///Stores users input

    reverseString(input); ///Calling function

    printf("Reversed string: %s\n", input); /// Print output

    return 0;
}


