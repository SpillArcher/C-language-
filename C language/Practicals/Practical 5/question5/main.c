#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxNameLength 50  ///Max Number of string

int main()
{
    ///Local variable definitions

    char name[maxNameLength];
    char surname[maxNameLength];
    char fullName[maxNameLength];

    printf("Input Name :");   ///Prompt users name
    scanf(" %s",name);

    printf("Input Surname :");///Prompt users surname
    scanf(" %s",surname);

    strcpy(fullName,name);    ///Add name to fullName
    strcat(fullName," ");     ///Add space
    strcat(fullName,surname); ///Combine surname with name

    printf("Fullname : %s\n",fullName); ///print out fullName


    return 0;
}
