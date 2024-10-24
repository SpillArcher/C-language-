#include <stdio.h>
#include <stdlib.h>

/**Write a C function to count all the negative elements in the array below.
{-23,8,34,28,-9,-11,67,45,-87}


int countNegative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {-23, 8, 34, 28, -9, -11, 67, 45, -87};
    int size = sizeof(arr) / sizeof(arr[0]);
    int negativeCount = countNegative(arr, size);
    printf("Number of negative elements in the array: %d\n", negativeCount);
    return 0;
}**/
/**Write a C program to calculate determinant of the 3 x 3 matrix used in
question 3.


int determinant(int matrix[3][3]) {
    int det = 0;
    det = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2])) -
          matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2])) +
          matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1]));
    return det;
}

int main() {
    int matrix[3][3] = {{-23, 8, 34},
                        {28, -9, -11},
                        {67, 45, -87}};
    int det = determinant(matrix);
    printf("Determinant of the 3x3 matrix: %d\n", det);
    return 0;
}**/


/**Write a C program to add two matrices using multi-dimensional arrays.




#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int mat2[ROWS][COLS] = {{9, 8, 7},
                            {6, 5, 4},
                            {3, 2, 1}};
    int result[ROWS][COLS];

    addMatrices(mat1, mat2, result);

    printf("Matrix 1:\n");
    displayMatrix(mat1);
    printf("\nMatrix 2:\n");
    displayMatrix(mat2);
    printf("\nSum of the matrices:\n");
    displayMatrix(result);

    return 0;
}**/


/**Passing a sized array to a function, write a C program to find the
maximum number in an array of elements

#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element as maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }
    return max;
}

int main() {
    int arr[] = {-23, 8, 34, 28, -9, -11, 67, 45, -87};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    printf("Maximum number in the array: %d\n", max);
    return 0;
}**/

/**Write a program in C to separate odd and even integers from 1 – 30 in
separate arrays**/

#include <stdio.h>

int main() {
    int odd[15], even[15]; // Arrays to store odd and even numbers
    int oddIndex = 0, evenIndex = 0; // Index variables for odd and even arrays

    // Separating odd and even numbers from 1 to 30
    for (int i = 1; i <= 30; i++) {
        if (i % 2 == 0) {
            even[evenIndex++] = i; // Add even number to even array
        } else {
            odd[oddIndex++] = i; // Add odd number to odd array
        }
    }

    // Printing odd numbers
    printf("Odd numbers from 1 to 30: ");
    for (int i = 0; i < oddIndex; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    // Printing even numbers
    printf("Even numbers from 1 to 30: ");
    for (int i = 0; i < evenIndex; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}






