/**###############################
#  AUTHOR  - STEPHEN EKWE        #
#  SUBJECT - SOFTWARE DESIGN 1   #
#  TOPIC   - PREPROCESSORS       #
#  CODE    - SDN150S             #
###############################**/

/**
PREPROCESSORS
The C Preprocessor is not a part of the compiler, but is a separate step in
the compilation process. In simple terms, it's a text substitution tool that
instructs the compiler to do the required preprocessing before the actual compilation.

All preprocessor commands begin with a hash symbol (#)

▪ Predefined Macro
These macros are defined by the compiler as part of the programming language's
standard, meaning that they are available automatically without the need for any
explicit definitions by the programmer

Common used predefined macros are:
__DATE__ - The current date as a character literal in "MMM DD YYYY" format.
__TIME__ - The current time as a character literal in "HH:MM:SS" format.
__FILE__ - This contains the current filename as a string literal.
__LINE__ - This contains the current line number as a decimal constant.
__STDC__ - Defined as 1 when the compiler complies with the ANSI standard.


▪ Marco Continuation Operator(\)
A macro is normally confined to a single line. The macro continuation
operator (\) is used to continue a macro that is too long for a single line

▪ Stringize Operator(#)
The stringize or number-sign operator (#), when used within a macro
definition, converts a macro parameter into a string constant. This
operator may be used only in a macro having a specified argument or
parameter list.

▪ Token Pasting Operator(##)
The token-pasting operator (##) within a macro definition combines two
arguments. It permits two separate tokens in the macro definition to be
joined into a single token

▪ Defined Operator(#define)
The #define directive is used by the preprocessor to define macros.
It is not technically an "operator" but rather a preprocessor directive.

The #define directive can be used as constant expressions in conditionals to
determine if an identifier is already defined using #define.

If the specified identifier is defined, the value is true (non-zero). If the
symbol is not defined, the value is false (zero)

▪ Parameterized Macro

DYNAMIC MEMORY MANAGEMENT
▪ Dynamically Allocate Memory
▪ Resize and Release Memory
▪ Recommended Read

**/

#include <stdio.h>
#include <stdlib.h>

// Continuation Operator
#define message_for(a) \
    printf("Welcome " #a ",\nWe are CPUT, DEECE\n") // Stringize Operator
// Token Pasting Operator
#define CONCAT(a, b) a ## b
// define operator
#define GREETING "Hello, World!"
#define my_PI 3.14159
#if !defined (REGISTERED)
    #define REGISTERED "Welcome onboard"
#endif
// Parameterized macro
#define square(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define DEBUG_PRINT(var, format) \
    printf("DEBUG: %s \nLine %d \nerr: %s = " format "\n", __FILE__, __LINE__, #var, var)



int main() {
/// Predefined Macros
    printf("File : %s\n", __FILE__);
    printf("Date : %s\n", __DATE__);
    printf("Time : %s\n", __TIME__);
    printf("Line : %d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__ );

#ifdef __STDC__
    printf("Standard C compiler\n\n");
#endif


/// Marco Continuation Operator
    message_for(Jane);

/// Token Pasting Operator
    // Right Example.
    int xy = 10;
    int value = CONCAT(x,y);
    printf("The value is %d\n", value);

    // Wrong Example.
    char first[5] = "John";
    char last[5] = "Doe";
    char firstlast[20];
    strcpy(firstlast,CONCAT(first,last));
    printf("Fullname = %s\n",firstlast);

    // Correct approach
    strcat(first,last);
    printf("Fullname = %s\n",first);

/// Define Operator
    printf("pi=%f\n",my_PI);
    printf(GREETING);
    printf("\n%s\n",REGISTERED);

/// Parameterized Macro
    printf("square of 5 = %d\n",square(5));
    int x = 10, y = 5;
    printf("Max: %d\n", MAX(x, y));  // Outputs 10
    printf("Min: %d\n", MIN(x, y));  // Outputs 5
    printf("Abs: %d\n", ABS(-x));    // Outputs 10

    int Name = 1024;
    DEBUG_PRINT(Name, "%d");  // Example output: DEBUG: main.c:10 z = 1024


    return 0;
}
