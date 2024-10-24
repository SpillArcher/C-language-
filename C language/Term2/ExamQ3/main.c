/******************************* START OF PROGRAM ********************************/

/** HEADER FILES **/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <time.h>

/** PREPROCESSOR DIRECTIVE**/
#define LOG_FILENAME "login_attempts.log"
#define MAX_ATTEMPTS 3
#define BUFFER_SIZE 50

/** FUNCTION PROTOTYPE **/
void log_attempt(const char *username, const char *password);

/** MAIN FUNCTION **/
int main() {
    char username[BUFFER_SIZE];
    char password[BUFFER_SIZE];
    int attempt = 0;

    while (attempt < MAX_ATTEMPTS) {
        printf("Enter Username: ");
        if (fgets(username, BUFFER_SIZE, stdin) == NULL) {
            perror("Error reading username");
            return EXIT_FAILURE;
        }

        // Remove newline character from username
        username[strcspn(username, "\n")] = '\0';

        printf("Enter Password: ");
        if (fgets(password, BUFFER_SIZE, stdin) == NULL) {
            perror("Error reading password");
            return EXIT_FAILURE;
        }

        // Remove newline character from password
        password[strcspn(password, "\n")] = '\0';

        if (strcmp(password, "1234") != 0) {
            log_attempt(username, password);
            printf("Invalid password. Try again.\n");
            attempt++;
        } else {
            printf("Login successful.\n");
            break;
        }
    }

    if (attempt == MAX_ATTEMPTS) {
        printf("Maximum attempts reached. Logging out.\n");
    }

    return EXIT_SUCCESS;
}

/** FUNCTION DEFINITION **/
void log_attempt(const char *username, const char *password) {
    FILE *log_file = fopen(LOG_FILENAME, "a");
    if (log_file == NULL) {
        perror("Failed to open log file");
        return;
    }

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    fprintf(log_file, "Username: %s | Password: %s | Date/Time: %04d-%02d-%02d %02d:%02d:%02d\n",
        username, password,
        tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
        tm.tm_hour, tm.tm_min, tm.tm_sec);

    fclose(log_file);
}

/******************************* END OF PROGRAM ********************************/

