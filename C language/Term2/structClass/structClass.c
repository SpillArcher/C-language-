/**###############################
#  AUTHOR  - STEPHEN EKWE        #
#  SUBJECT - SOFTWARE DESIGN 1   #
#  TOPIC   - STRUCTURES & UNIONS #
#  CODE    - SDN150S             #
###############################**/

/** STRUCTURES, UNOINS, & TYPEDEF

1. DEFINITION:
A STRUCTURE is a user-defined data types that allows for
the collection of items with different or related data types under
one name.

A UNION is a special data type that allows to store for the
collection of items with different or related data types in
the same memory location.

2. SYNTAX:
struct [structure tag]
{
  member definition;
  member definition;
  ...
  member definition;
} [one or more structure variables];

union [union tag]
{
  member definition;
  member definition;
  ...
  member definition;
} [one or more union variables];


3. KEYWORDS:
Struct - used to declare a structure
Union - used to declare a union

Tag is the name of the user defined data type,
which can be followed by a variable name.

4. DEFINITION:
struct Demo{
  char a;
  int b;
  float c;
};

struct Demo variable_name;
The line above is used initialized the variable_name in main

                    OR

struct Demo{
  char a;
  int b;
  float c;
}variable_name;

This initializes the variable_name in the structure definition.

                    OR

typedef struct{
  char a;
  int b;
  float c;
}utype;

utype variable_name;

Here, we can use utype as alias using the typedef keyword.
This acts as a data type for variable_name.

5. MEMORY:
struct Demo{
  char a;       | 1 byte (8 bits)
  int b;        | 2 bytes (16 bits)
  float c;      | 4 byes (32 bits)
}variable_name;              Max size = 7 bytes

unoin Demo{
  char a;       | 1 byte (8 bits)
  int b;        | 2 bytes (16 bits)
  float c;      | 4 byes (32 bits)
}variable_name;              Max size = 4 bytes

This means the maximum size of struct memory is the sum of size of all it's
members, while the maximum size of a union is the size of it's member
with the largest memory requirement.

6. INITIALIZATION:
struct Demo variable_name = {'A',19,3.178};
union Demo variable_name = 3.178;

In structures all members can be initialize, while a union can only initialize
one member at a time.

7. ACCESSING:
You use the dot(.) operator to access members of a structure or union type.
similarly, you can accessing all members of a structure simultaneously, while
you can only access one union member individually, preferably the member with
an assignment. Accessing all members can return a garbage value.

**/

/// HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define PI 3.14159265
#define CYCLE_LENGTH 60 // Total cycle time in seconds

/// GLOBAL DECLARATION
E1=1; // example 1 flag
E2=1; // example 2 flag
E3=1; // example 3 flag
/******************* EXAMPLE 1 ******************/
struct Book{
    char title[50];
    char author[50];
    int pages;
};

struct CPUT{
    char name[10];
    int student_no;
    bool enrolled;
} student;

typedef struct{
    char type[10];
    char grade;
    float marks;
} SOS;

/******************* EXAMPLE 2 ******************/
typedef struct{
    double real;
    double imag;
} Complex;

/******************* EXAMPLE 3 ******************/
typedef union {
    float temperature;  // Temperature in degrees Celsius
    float pressure;     // Pressure in kilopascals
    int humidity;       // Humidity percentage
} SensorData;

typedef struct {
    char type;  // 'T' for temperature, 'P' for pressure, 'H' for humidity
    SensorData data;
} Sensor;


/// Function Prototype & Definition
// Function to add two complex numbers
Complex add(Complex a, Complex b){
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex a, Complex b){
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Function to display sensor data
void displaySensorData(Sensor sensor){
    switch (sensor.type) {
        case 'T':
            printf("Temperature: %.2f degrees Celsius\n", sensor.data.temperature);
            break;
        case 'P':
            printf("Pressure: %.2f kPa\n", sensor.data.pressure);
            break;
        case 'H':
            printf("Humidity: %d%%\n", sensor.data.humidity);
            break;
        default:
            printf("Unknown sensor type\n");
    }
}

int main()
{
    /** EXAMPLES 1:
        To demonstrate your understanding of the above, define
        a structure with three members, assign values to
        them and access them using the dot (.) operator.
    **/
    do{
        /// TYPE 1
        // Declare a variable of type Book
        struct Book book;

        // Assign data to the book record
        strcpy(book.title, "The C Programming Language");
        strcpy(book.author, "Dennis Ritchie");
        book.pages = 279;
        // Access and print book information
        printf("Book: %s\n", book.title);
        printf("Author: %s\n", book.author);
        printf("Pages: %d\n\n", book.pages);


        /// TYPE 2
        // Assign data to the student record
        strcpy(student.name,"John Doe");
        student.student_no = 241306094;
        student.enrolled = true;
        // Access and print student information
        printf("Student Name: %s\n",student.name);
        printf("Student Number: %d\n",student.student_no);
        printf("Student Enrolled: %d\n\n",student.enrolled);


        /// TYPE 3
        // Declare a variable of type SOS
        SOS summative;

        // Assign data to the summative record
        strcpy(summative.type,"Test");
        summative.grade = 'A';
        summative.marks = 98.65;
        // Access and print summative information
        printf("Type: %s\n",summative.type);
        printf("Grade: %c\n",summative.grade);
        printf("Marks: %.2f\n\n",summative.marks);

    }while(E1!=1);

    /** EXAMPLE 2
    Using a struct perform the operation of the following
    complex number (Real + Imaginary):
    a) A + B
    b) B + C - A
    Where;
    A = 21.87 + 30j
    B = 13.84 + 112.23j
    C = 56.12 + 96.11j
    **/

    do{
        // Initialize complex numbers A, B, and C
        Complex A = {21.87, 30.00};
        Complex B = {13.84, 112.23};
        Complex C = {56.12, 96.11};

        // Calculate A + B
        Complex result1 = add(A, B);
        printf("A + B = %.2lf + %.2lfj \
           \n",result1.real,result1.imag);

        // Calculate B + C - A
        Complex temp = add(B, C);
        Complex result2 = subtract(temp, A);
        printf("B + C - A = %.2lf + %.2lfj \
           \n",result2.real,result2.imag);

    }while(E2!=1);

    /** EXAMPLE 3
    Create a struct whose member is a union type,
    the union should be used to store multiple sensors
    data containing temperature, pressure, & humidity dataset.
    display the sensor values after assignment.
    **/
    // Create sensor instances
    Sensor sensorT = {'T', .data.temperature = 23.5};
    printf("Temp: %.2f\n",sensorT.data.temperature); // union member
    Sensor sensorP = {'P', .data.pressure = 101.3};
    printf("Pressure: %.2f\n",sensorT.data.pressure); // union member
    Sensor sensorH = {'H', .data.humidity = 85};
    printf("Humidity: %d\n",sensorT.data.humidity); // union member

    // Display data for each sensor
    displaySensorData(sensorT);
    displaySensorData(sensorP);
    displaySensorData(sensorH);

    // check union members
    printf("%.2f\n",sensorT.data.temperature); // union member
    printf("%.2f\n",sensorT.data.pressure); // union member
    printf("%d\n",sensorT.data.humidity); // union member
    printf("%c\n",sensorT.type);   // struct member

    return 0;
}
