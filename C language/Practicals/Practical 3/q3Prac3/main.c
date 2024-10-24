#include <stdio.h>
#include <math.h>

#define STUDENTS 5
#define TESTS 5

/// Function to calculate statistical analysis
void statisticalAnalysis(double scores[STUDENTS][TESTS], double *mean, double *stdDeviation, double *min, double *max) {
    double sum = 0.0, sumSquared = 0.0;
    *min = scores[0][0];
    *max = scores[0][0];

    /// Calculate mean, standard deviation, min, and max
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < TESTS; j++) {
            sum =sum + scores[i][j];
            sumSquared =sumSquared + scores[i][j] * scores[i][j];
            if (scores[i][j] < *min)
                *min = scores[i][j];
            if (scores[i][j] > *max)
                *max = scores[i][j];
    }
    }
    *mean = sum / (STUDENTS * TESTS);

    *stdDeviation = sqrt((sumSquared / (STUDENTS * TESTS)) - (*mean * *mean));
}
int main() {
    double scores[STUDENTS][TESTS];
    double mean, stdDeviation, min, max;

    /// Prompt the user to enter scores of students
    printf("Enter the test scores for each student:\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < TESTS; j++) {
            printf("Test %d: ", j + 1);
            scanf("%lf", &scores[i][j]);
    }
    }
    /// Call function
    statisticalAnalysis(scores, &mean, &stdDeviation, &min, &max);
    /// Print out results
    printf("\nStatistical Analysis Results:\n");
    printf("Mean: %.2lf\n", mean);
    printf("Standard Deviation: %.2lf\n", stdDeviation);
    printf("Minimum Score: %.2lf\n", min);
    printf("Maximum Score: %.2lf\n", max);
    return 0;
}
