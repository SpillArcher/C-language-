#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for job details
struct StructJob {
    char Name[50];
    float Salary;
    int IdentityNumber;
};

// Define the union with three members
union UnionJob {
    int member1;
    float member2;
    struct StructJob member3;
};

int main() {
    // Initialize a union variable
    union UnionJob jobUnion;

    // Assign values to the members of the union
    jobUnion.member1 = 100;
    jobUnion.member2 = 10.2;
    strcpy(jobUnion.member3.Name ,"John");
    jobUnion.member3.Salary = 50000.0;
    jobUnion.member3.IdentityNumber = 123456;

    // Print the values contained in all the members of the union
    printf("Value of member1: %d\n", jobUnion.member1);
    printf("Value of member2: %f\n", jobUnion.member2);
    printf("Name: %s\n", jobUnion.member3.Name);
    printf("Salary: %f\n", jobUnion.member3.Salary);
    printf("Identity Number: %d\n", jobUnion.member3.IdentityNumber);

    return 0;
}
