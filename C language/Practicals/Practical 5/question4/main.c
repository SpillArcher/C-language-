#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];///Max length of string

    printf("Enter your password: ");///Prompt user to input Password
    scanf("%s", password);

    int length = strlen(password);///calculating length of passwordd
    int upperCase = 0;
    int number = 0;

    /// Check if password is at least 8 characters
    if (length < 8)
    {
        printf("Password must be at least 8 characters\n");
        return 1; /// means it fails
    }

    ///check each character for uppercase letter and number
    for (int i = 0; i < length; i++)
    {
        if (isupper(password[i]))
        {
            upperCase = 1;
        }
        if (isdigit(password[i]))
        {
            number = 1;
        }
    }

    if (!upperCase)
    {
        printf("Password must have at least 1 uppercase letter.\n");/// Check if password contains at least one uppercase letter
        return 1; /// means it fails
    }


    if (!number)
    {
        printf("Password must have at least 1 number.\n");/// Check if password contains at least one number
        return 1; /// means it fails
    }

    printf("Password is Successful.\n");
    return 0; /// means it is successfull
}

