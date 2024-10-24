#include <stdio.h>
#include <string.h>

int main() {

    ///String containing sentence

    char strin[] = "Future engineering focuses on sustainability, AI integration, renewable energy, advanced materials, and personalized medicine, to enhance efficiency and human well-being.";
    char letter;
    int count = 0;

    printf("Enter the character to find its occurrences: ");///prompt user to enter character
    scanf(" %c", &letter);

    char *ptr = strin; /// Pointer to the start of the string

    while ((ptr = strchr(ptr, letter)) != NULL) {
        printf("Character '%c' found at position: %ld\n", letter, ptr - strin);
        printf("Pointer address: %p\n", (void *)ptr);
        ptr++;                                            /// Move pointer to search for next occurrence
        count++;
    }

    printf("Total occurrences of '%c' in the string: %d\n", letter, count); ///print output

    return 0;
}

