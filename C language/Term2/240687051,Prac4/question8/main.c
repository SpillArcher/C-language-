#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**8. Develop a welcome to CPUT Sports Hub form using the C program. request a user to enter
login details and check that the username entered contains "@mycput.ac.za", and the
password entered has at least a string of eight characters, which must include a special
character. Using pointers, ensure you create a separate function to check for the username
and password login requirements**/

                                               /// Function variables
int checkUsername(const char *username);
int checkPassword(const char *password);

int main() {
    char username[100];
    char password[100];

    printf("Welcome to CPUT Sports Hub!\n");

    printf("Enter your username: ");
    fgets(username, sizeof(username), stdin);
                                             /// Remove newline character from the end of the input string
    username[strcspn(username, "\n")] = '\0';

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
                                             /// Remove newline character from the end of the input string
    password[strcspn(password, "\n")] = '\0';

    if (checkUsername(username)) {
        if (checkPassword(password)) {
            printf("Login successful!\n");
        } else {
            printf("Password must be 8 characters long and have at least one special character.\n");
        }
    } else {
        printf("Username must contain '@mycput.ac.za'.\n");
    }

    return 0;
}

/// Function to check the username
int checkUsername(const char *username) {
    const char *required_domain = "@mycput.ac.za";
    if (strstr(username, required_domain) != NULL) {
        return 1;
    }
    return 0;
}

                    /// Function to check the password
int checkPassword(const char *password) {
    int length = strlen(password);
    if (length < 8) {
        return 0;
    }
    int specialCharacter = 0;
    for (int i = 0; i < length; i++) {
        if (!isalnum(password[i])) {
            specialCharacter = 1;
            break;
        }
    }
    return specialCharacter;
}

