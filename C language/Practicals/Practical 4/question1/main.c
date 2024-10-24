#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 3

int main()
{
    char names[STUDENTS][20] = {"Student 1", "Student 2", "Student 3", "Student 4", "Student 5"};
    int scores[STUDENTS][SUBJECTS];

    printf("Enter scores for each student (MATH, PHYSICS, CHEMISTRY):\n");///prompt input scores form students
    for (int i = 0; i < STUDENTS; i++)
        scanf("%d%d%d", &scores[i][0], &scores[i][1], &scores[i][2]);


    ///Find maximum,minimum and mean scores of students
    int max = scores[0][0], min = scores[0][0];
    float mean[STUDENTS], total;

    for (int i = 0; i < STUDENTS; i++)
    {
        total = 0;
        for (int j = 0; j < SUBJECTS; j++)
        {
            total += scores[i][j];
            if (scores[i][j] > max) max = scores[i][j];
            if (scores[i][j] < min) min = scores[i][j];
        }
        mean[i] = total / SUBJECTS;
    }

    /// Print max, min, and mean

    printf("\nMax score: %d\nMin score: %d\nMean scores:\n", max, min);
    for (int i = 0; i < STUDENTS; i++)
        printf("%s: %.2f\n", names[i], mean[i]);

    /// Print names of students with mean less than 60

    printf("\nStudents with mean score less than 60%%:\n");
    for (int i = 0; i < STUDENTS; i++)
        if (mean[i] < 60.0)
            printf("%s\n", names[i]);

    return 0;
}
