#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>

int main()
{
    int flag=0;

    FILE *fr;///reads file
    FILE *fw;///writes file
    FILE *fa;///adds anything to file

    fw=fopen("C:/Users/aj864/OneDrive/Documents/Software Design/Term2/note/text.02.txt","w");

    if(fw==EOF)
    {
        printf("File is Invalid.\n");
        flag==EOF;
    }
    else
    {
        printf("File is Valid.\n");
    }

    char words[50]="Welcome To CPUT :What is your name?  ";

    fputs(words,fw);

    fa=fopen("C:/Users/aj864/OneDrive/Documents/Software Design/Term2/note/text.02.txt","a");

    if(fa==EOF)
    {
        printf("Stream is Inalid.\n");
        flag==0;
    }
    else
    {
        printf("Stream is Valid.\n");
    }

    char name[20]="Anthony Joseph";
   fputs(name,fw);

    fr=fopen("C:/Users/aj864/OneDrive/Documents/Software Design/Term2/note/text.02.txt","a");

    if(fr==EOF)
    {
        printf("Stream is Invalid.\n");
        flag==0;
    }
    else
    {
        printf("Stream is valid");
    }







    return 0;
}
