/**###############################
#  AUTHOR  - STEPHEN EKWE        #
#  SUBJECT - SOFTWARE DESIGN 1   #
#  TOPIC   - FILE HANDLING       #
#  CODE    - SDN150S             #
###############################**/

/**
FILE HANDLING
▪ Open Files
You can use the fopen() function to create a new file or to open an
existing file.

Syntax: FILE *fopen( const char * filename, const char * mode );

where mode can be:
    r  - opens & reads from an existing text file.
    w  - Opens/creates & write to a text file.
    a  - opens/creates & appends to a text file.

    r+ - opens & reads/write from an existing text file.
    w+ - Opens/creates & write/read to a text file (i.e., if exist, Truncate file).
    a+ - opens/creates & appends/read to a text file.

    If you are going to handle binary files:
    "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"


▪ Closing a File
To close a file, use the fclose() function.
- int fclose( FILE *fp );

where fp is the file stream.

The fclose() function returns zero on success, or EOF if there is an
error in closing the file.

This function actually flushes any data still pending in the buffer
to the file, closes the file, and releases any memory used for the
file.


▪ Writing a File
To write a character to file use the function fputc() function.
- int fputc( int c, FILE *fp );

To write a string to file use the fputs() function:
- 1: int fputs( const char *s, FILE *fp );
- 2: int fprintf(FILE *fp,const char *format, ...)

It returns a non-negative value on success,otherwise EOF is returned
in case of any error.


▪ Reading a File
To read a single character from a file use the fgetc() function:
- int fgetc( FILE * fp );

The return value is the character read, or in case of any error, it returns EOF.

To read a string from an input file stream use the fgets() function:
- 1: char *fgets( char *str, int num, FILE *fp );
- 2: int fscanf(FILE *fp, const char *format, ...);

where str is a pointer of the char array where the string read is stored.
num is the maximum number of characters to be read from the input stream
(including the terminating null character)


▪ Binary Input/Output Functions
- Study this topic

**/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    int flag = 0;

    /// Open & write to file
    FILE *fr; // file for reading
    FILE *fw; // file for writing
    FILE *fa; // file for appending

    /// fr = fopen("XXXX/XXXXXX/XXXXXXX/test01.txt", "r");
    // where XXXX is the path and test01.txt is the file to read from
    fr = fopen("test01.txt", "r");

    /// Write character to file
    // check path is valid
    if (fr == NULL)
    {
        perror("Failed to open file");
        flag = EOF;
    }
    else{
        printf("Path valid");
    }

    // check input stream for error
    char c = 'I';
    if (fputc(c, fr) == EOF)
    {
        perror("Failed to write to file");
        flag = EOF;
    }
    else{
        printf("Stream valid");
    }

    /**
     Perror  is used in diagnosing the reason for a failure in system calls,
     such as open, read, write, or socket functions, which set errno on failure.
    **/

    // writes character array to file
    /// fw = fopen("XXXX/XXXXXX/XXXXXXX/test01.txt", "w");
    // where XXXX is the path and test01.txt is the file to write to
    fw = fopen("test02.txt", "w");
    char name[5]= "Thito";
    for(int i=0; i<5; i++)
    {
        fputc(name[i], fw );
    }


    /// Write string to file
    fprintf(fw, "\nThis is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fw);

    /// Append string to file
    /// fa = fopen("XXXX/XXXXXX/XXXXXXX/test01.txt", "a");
    // where XXXX is the path and test01.txt is the file to append to
    fa = fopen("test02.txt", "a");
    fprintf(fa, "\nThis is appends to file using fprintf...\n");
    fputs("This is appends to file using fputs...\n", fa);

    /// Append on set conditions
    for(int i=0; i<20; i++)
    {
        if(i%2==0) // check even condition
        {
          fprintf(fa, "\nAppends %d to file\n",i);
        }
    }

    /// Close file
    fclose(fr);
    fclose(fw);
    fclose(fa);

    /// Read file
    int buffer_size = 50;
    char str[buffer_size];
    fr = fopen("test02.txt", "r");

    // check for file stream error using fgets
    if (fgets(str, buffer_size, fr) != NULL) {
        printf("\nRead string: %s\n", str);
    } else {
        printf("\nError or end of file encountered\n");
    }

    // check for input stream error using fscanf
    if (fscanf(fr, "%s", str) != NULL) {
        printf("Read string: %s\n", str);
    } else {
        printf("Failed to read the expected data.\n");
    }

    fscanf(fr, "%s", str);
    printf("1: %s\n", str);
    fgets(str, buffer_size, fr);
    printf("2: %s", str);
    fgets(str, buffer_size, fr);
    printf("3: %s", str);

    for(int i=0;i<3;i++)
    {
        fgets(str, buffer_size, fr);
        printf("%d: %s", i,str);
    }

    /// Read from input stream
    char UName[buffer_size];
    // check for input stream error using fgets
    printf("\nEnter Username: ");
    if (fgets(UName, buffer_size, stdin) != NULL) {
        printf("\nUsername: %s\n", UName);
    } else {
        printf("\nError or end of file encountered\n");
    }

    fclose(fr);
    return flag;
}
