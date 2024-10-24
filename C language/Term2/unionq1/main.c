#include <stdio.h>

// Define a union with multiple members
union MyUnion {
    int integer;
    float floating_point;
    char character;
};

int main() {
    // Initialize a union variable
    union MyUnion myUnion;

    // Assign values to the members of the union
    myUnion.integer = 42;
    myUnion.floating_point = 3.14;
    myUnion.character = 'A';

    // Print the size of the union
    printf("Size of union: %lu bytes\n", sizeof(union MyUnion));

    // Print the value stored within each member
    printf("Value stored in integer member: %d\n", myUnion.integer);
    printf("Value stored in floating_point member: %f\n", myUnion.floating_point);
    printf("Value stored in character member: %c\n", myUnion.character);

    return 0;
}
