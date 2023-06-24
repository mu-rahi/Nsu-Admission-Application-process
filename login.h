#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
} User;

typedef struct {
    User users[MAX_USERS];
    int count;
} UserDB;

void registerUser(UserDB* userDB) {
    if (userDB->count >= MAX_USERS) {
        printf("User database is full. Cannot register more users.\n");
        return;
    }

    User newUser;

    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\tEnter username: ");
    scanf("%s", newUser.username);

    printf("\t\t\t\t\t\tEnter password: ");
    scanf("%s", newUser.password);

    // Save user information to the file
    FILE* file = fopen("user_login_info.txt", "a");
    if (file == NULL) {
        printf("Error opening file. Registration failed.\n");
        return;
    }

    fprintf(file, "%s %s\n", newUser.username, newUser.password);
    fclose(file);

    userDB->users[userDB->count++] = newUser;

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n->\t\t\t\t\t\tRegistration successful! \n");


}

int loginUser(UserDB* userDB) {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\tEnter username: ");
    scanf("%s", username);

    printf("\t\t\t\t\t\tEnter password: ");
    scanf("%s", password);

    // Check user information from the file
    FILE* file = fopen("user_login_info.txt", "r");
    if (file == NULL) {
        printf("Error opening file. Login failed.\n");
        return 0; // Failed login
    }

    char fileUsername[MAX_USERNAME_LENGTH];
    char filePassword[MAX_PASSWORD_LENGTH];
    while (fscanf(file, "%s %s", fileUsername, filePassword) == 2) {
        if (strcmp(username, fileUsername) == 0 && strcmp(password, filePassword) == 0) {
            fclose(file);
            printf("\t\t\t\t\t\tLogin successful!\n");
            return 1; // Successful login
        }
    }

    fclose(file);
    printf("Invalid username or password. Login failed.\n");
    return 0; // Failed login
}

