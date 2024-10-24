#include <stdio.h>
#include <stdlib.h>


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

    int negatives = countNegative(arr, size);

    printf("Number of negative elements: %d\n", negatives);

    return 0;
}
