#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define students 5
#define nameLength 20


/// Union called Color
typedef union{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
}Color;

///Structure called Student
typedef struct  {
    char name[nameLength];
    int rollNumber;
    float marks;
}Student;

int main() {
    ///Adding values to the union members
     Color RGB;
    RGB.red = 267;
    RGB.green = 120;
    RGB.blue = 234;

    ///Print RGB colors
    printf("RGB color values: R: %d\n\t\t  G: %d\n\t\t  B: %d\n", RGB.red, RGB.green, RGB.blue);

    ///Array of five Student structures
     Student people[students] = {{"Anthony", 001, 100.00},{"Miv", 123, 70.45},{"Andy", 124, 89.45},{"Jade", 125, 82.3},{"Mary", 126, 64.34}

    };

    ///Print information of students
    printf("\nInformation of students:\n");
    for (int i = 0; i < students; i++) {
        printf("Name: %s\n Roll Number: %d\n Marks: %.2f\n", people[i].name, people[i].rollNumber, people[i].marks);
    }

    return 0;
}
