#include<stdio.h>
#include"project_lib.h"
#include"splash.h"

void welcomeMessage();
void recursiveLoading();
void splash();
void admission_form();

int main(void)
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    recursiveLoading(0);
    welcomeMessage();
    system("cls");

    int choice;

    printf("\n\n\n\n\n\n\n\n\n");

    const char* myMessage1 = "\t\t\t\t\t\tp l e a s e     e n t e r     y o u r      c h o i c e \n\n\n";
    printWithTypingAnimation(myMessage1);

    UserDB userDB;
    userDB.count = 0;

    int loggedIn = 0;

    while (1) {
        printf("\t\t\t\t\t\t1. Sign up\n");
        printf("\t\t\t\t\t\t2. Sign in\n");
        printf("\t\t\t\t\t\t3. Quit\n");
        scanf("%d", &choice);

        getchar(); // Clear the input buffer

        switch (choice) {
            case 1:
                system("cls");
                registerUser(&userDB);
                break;
            case 2:
                system("cls");
                loggedIn = loginUser(&userDB);
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        if (loggedIn) {
            // Perform actions for logged-in user
            // ...

            splash();
            system("cls");
            system("E:\\picture1.jpg");
            system("E:\\sound1.mp3");

            for (;;) {
                system("cls");
                printf("\t\t\t\t+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+                    MENU                       +\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+  1.Admission/registration                     +\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+  2.Academic Details                           +\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+  3.Fees Details                               +\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+  4.Show All Registration                      +\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+  5.Quit                                       +\n");
                printf("\t\t\t\t+                                               +\n");
                printf("\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++\n");

                const char* myMessage2 = "\n\n\t\t\t\tPlease enter your choice \n\n\n";
                printWithTypingAnimation(myMessage2);
                scanf(" %c", &choice); // Added space before %c to consume whitespace characters

                switch (choice) {
                    case '1':
                        system("cls");
                        admission_form();
                        break;
                    case '2':
                        system("cls");
                        show_academic_details();
                        break;
                    case '3':
                        fees_details();
                        break;
                    case '4':
                        display();
                        break;
                    case '5':
                        printf("Exiting...\n");
                        return 0;
                    default:
                        printf("Invalid input. Please enter a correct option.\n");
                        break;
                }
            }

            printf("Logged out.\n");
            loggedIn = 0;
        }

        printf("\n");
    }

    return 0;
}

