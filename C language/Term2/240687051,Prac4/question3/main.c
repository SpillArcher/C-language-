#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define subjects 3
#define students 5
#define nameLength 20

///Define Structure
 typedef struct  {
    char fullName[nameLength];
    int studentNumber;
    char subjectTitle[nameLength];
    float marks[subjects];
}Student;

int main() {
     Student people[students];
///Prompt Information of Students

    for (int i = 0; i < students; i++) {
        printf("Student %d:\nFull Name: ", i + 1);
        scanf("%s", people[i].fullName);
        printf("Student Number: ");
        scanf("%d", &people[i].studentNumber);
        printf("Subject Title: ");
        scanf("%s", people[i].subjectTitle);
        printf("Marks in three subjects: ");
        for (int j = 0; j < subjects; j++) {
            scanf("%f", &people[i].marks[j]);
        }
    }

    int Index;
    printf("\nEnter the student index (1 to 5) to view details: ");
    scanf("%d", &studentIndex);
    if (Index >= 1 && Index <= students) {
         Student a = people[Index - 1];
        printf("\nDetails of Student %d:\nFull Name: %s\nStudent Number: %d\nSubject Title: %s\nMarks in three subjects: %.2f, %.2f, %.2f\n",
               studentIndex, a.fullName, a.studentNumber, a.subjectTitle, a.marks[0], a.marks[1], a.marks[2]);
    } else {
        printf("\nInvalid student index!\n");
    }

    return 0;
}
