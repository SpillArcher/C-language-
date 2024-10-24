/******************************* START OF PROGRAM ********************************/

/** HEADER FILES **/
#include <stdio.h>
#include <string.h>

/** PREPROCESSOR DIRECTIVES **/
#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

/** PARAMETRIZED MACRO **/
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

/** STRUCTURE DEFINITION **/
struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    float result;
};

/** FUNCTION PROTOTYPES **/
void addStudent(struct Student students[], int *count);
void displayAllStudents(struct Student students[], int count);
void findStudentByID(struct Student students[], int count);
void calculateAverageResult(struct Student students[], int count);
void findMaxMinResult(struct Student students[], int count);

/** MAIN FUNCTION **/
int main() {
    struct Student students[MAX_STUDENTS];
    int studentCount = 0, choice;

    while (1) {
        printf("\nMenu:\n1. Add Student\n2. Display Students\n3. Find by ID\n4. Calculate Average\n5. Find Max/Min\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(students, &studentCount); break;
            case 2: displayAllStudents(students, studentCount); break;
            case 3: findStudentByID(students, studentCount); break;
            case 4: calculateAverageResult(students, studentCount); break;
            case 5: findMaxMinResult(students, studentCount); break;
            case 6: printf("Goodbye!\n"); return 0;
            default: printf("Invalid choice.\n");
        }
    }
}

/** FUNCTION DEFINITIONS **/

void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Max students reached.\n");
        return;
    }
    struct Student newStudent;
    printf("Enter ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter Name: ");
    getchar(); // Clear buffer
    fgets(newStudent.name, MAX_NAME_LENGTH, stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0; // Remove newline
    printf("Enter Result: ");
    scanf("%f", &newStudent.result);
    students[(*count)++] = newStudent;
    printf("Student added.\n");
}

void displayAllStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Result: %.2f\n", students[i].id, students[i].name, students[i].result);
    }
}

void findStudentByID(struct Student students[], int count) {
    int searchID;
    printf("Enter ID to search: ");
    scanf("%d", &searchID);
    for (int i = 0; i < count; i++) {
        if (students[i].id == searchID) {
            printf("Found - ID: %d, Name: %s, Result: %.2f\n", students[i].id, students[i].name, students[i].result);
            return;
        }
    }
    printf("Student not found.\n");
}

void calculateAverageResult(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to calculate average.\n");
        return;
    }
    float total = 0.0;
    for (int i = 0; i < count; i++) {
        total += students[i].result;
    }
    printf("Average Result: %.2f\n", total / count);
}

void findMaxMinResult(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to find max/min results.\n");
        return;
    }
    float maxResult = students[0].result;
    float minResult = students[0].result;
    for (int i = 1; i < count; i++) {
        maxResult = MAX(maxResult, students[i].result);
        minResult = MIN(minResult, students[i].result);
    }
    printf("Max Result: %.2f\nMin Result: %.2f\n", maxResult, minResult);
}

/******************************* END OF PROGRAM ********************************/
