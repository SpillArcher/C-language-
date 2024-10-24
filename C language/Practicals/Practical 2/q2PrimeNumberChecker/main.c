#include <stdio.h>
#include <stdlib.h>


int main() {
    int number, isPrime = 1;


    printf("Enter a number: ");//Prompt the user to input a number
    scanf("%d", &number);

    //Check if the number is divisible by any number other than 1 and itself
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0; // If divisible, not a prime
            break;
        }
    }


        if (isPrime){
            printf("%d is a prime number.\n", number);//Will print if number is prime
       } else{
            printf("%d is not a prime number.\n", number);//Will print if number is not prime
    }

    return 0;
}

