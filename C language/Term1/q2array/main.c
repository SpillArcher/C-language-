#include <stdio.h>
#include <stdlib.h>

///Write a program in C to separate odd and even integers from 1 – 30 in separate arrays
int main()
{
   int num[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};




    int numbers[30], even[30], odd[30];
    int even_count = 0, odd_count = 0;

    // Populate the numbers array from 1 to 30
    for (int i = 0; i < 30; i++) {
        numbers[i] = i + 1;
    }

    // Separate odd and even numbers
    for (int i = 0; i < 30; i++) {
        if (numbers[i] % 2 == 0) {
            even[even_count++] = numbers[i];
        } else {
            odd[odd_count++] = numbers[i];
        }
    }

    // Display even numbers
    printf("Even numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Display odd numbers
    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int countNegativeElements(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {-23, 8, 34, 28, -9, -11, 67, 45, -87};
    int size = sizeof(arr) / sizeof(arr[0]);

    int negativeCount = countNegativeElements(arr, size);
    printf("Number of negative elements: %d\n", negativeCount);

    return 0;
}



