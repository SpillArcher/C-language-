/**####################################
#  AUTHOR  - STEPHEN EKWE             #
#  SUBJECT - SOFTWARE DESIGN 1        #
#  TOPIC   - STRINGS & FORMATTED I/O  #
#  CODE    - SDN150S                  #
####################################**/

/// HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/** STRING CLASS **/

int main()
{
    char str1[] = "John";
    char str2[5];
    char str3[] = "Doe";
    char str4[] = "programming of others";

    /// String Copy
    strcpy(str2,str1);
    printf("str2: %s",str2);

    /// Concatenate String
    strcat(str1,str3);
    printf("\nNew str1: %s",str1);

    /// String length
    int len = strlen(str1);
    printf("\nLength of str1: %d\n",len);

    /// String Compare
    int check1 = strcmp("Hello","Hello"); // 0: s1==s2
    int check2 = strcmp("Hello","hello"); // -1: s1>s2
    int check3 = strcmp("ello","Hello"); // 1: s1<s2
    printf("\nCheck 1: %d",check1);
    printf("\nCheck 2: %d",check2);
    printf("\nCheck 3: %d\n\n",check3);


    /// Get first occurrence of character from string
    char* ptr1 = strchr(str4,'o');
    char* ptr = &str4;
    printf("position of first occurrence of 'o': %d\n",ptr1-ptr);
    printf("Pointer address: %p | value: %c \n\n",ptr1,*ptr1);

    /// Get all occurrence of character from string
    for(int i=0;i<strlen(str4);i++)
    {
        if(*ptr1=='o')
        {
           printf("\nCharacter: %c | address: %p | position: %d",*ptr1,ptr1,ptr1-ptr);
        }

        ptr1++;
    }

    printf("\n");
    /// Get occurrence of substring from string
    char* ptr2 = strstr(str4,"others");
    for(int i=0;i<strlen("others");i++)
    {
           printf("\nCharacter: %c | address: %p | position: %d",*(ptr2+i),(ptr2+i),(ptr2+i)-ptr);
    }



    /** Formatted input Operation **/
    char ch;
    char string1[10];
    char string2[20];
    char string3[20];

    /// GETS & PUTS
    printf("\nEnter Surname: ");
    gets(string1);
    printf("\nSurname: ");
    puts(string1);

    /// GETCHAR & PUTCHAR
    printf("\nEnter Inital: ");
    ch = getchar();
    printf("\nInital: ");
    putchar(toupper(ch));

    /// PRINTF & SCANF
    printf("\nEnter Address: ");
    scanf("%s",&string2);

    printf("scanf address: %s",string2);

    printf("\nEnter other Address: ");
    gets(string3);
    puts(string3);

    return 0;
}