#include <stdio.h>
#include <string.h>

#define USERNAME_LENGTH 20
#define PASSWORD_LENGTH 20

int main() {
    char username[USERNAME_LENGTH];
    char password[PASSWORD_LENGTH];
    char storedUsername[USERNAME_LENGTH] = "googleUser";
    char storedPassword[PASSWORD_LENGTH] = "googlePass";

    printf("Welcome to Google!\n");
    printf("Please enter your username: ");
    scanf("%s", username);
    printf("Please enter your password: ");
    scanf("%s", password);

    if (strcmp(username, storedUsername) == 0 && strcmp(password, storedPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed!\n");
    }

    return 0;
}
