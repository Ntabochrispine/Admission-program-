// Admission project to determine the course a student can be placed in based on their KCSE mean grade or the course they have completed.
// The program prompts the user to enter their name, choose between using their KCSE mean grade or an alternative course, and then determines the appropriate course placement based on the input provided.
// The project was an exercise in using conditional statements, loops, and string comparison in C programming.
// The main purpose of this project is to demonstrate the ability to implement basic decision-making logic in a C program, while also practicing user input handling and string manipulation.
// The main porpose of this project was to practice using nested if-else statements, loops, and string comparison in C programming, while also demonstrating the ability to implement basic decision-making logic in a C program.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char studentName[100];
char studentGrade[3];
int choice;
int option;

int main()
{
    printf("Enter Your name: ");
    scanf("%[^\n]s", studentName);

    do
    {

        printf("Choose 1 to use Grade for selection or 2 for alternative: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter your KCSE mean grade: ");
            scanf("%s", studentGrade);

            if (strcmp(studentGrade, "A") == 0 || strcmp(studentGrade, "A-") == 0 || strcmp(studentGrade, "B+") == 0 || strcmp(studentGrade, "B") == 0 || strcmp(studentGrade, "B-") == 0 || strcmp(studentGrade, "C+") == 0)
            {
                printf("%s, you have been placed in a degree course", studentName);
                return;
            }
            else if (strcmp(studentGrade, "C") == 0 || strcmp(studentGrade, "C-") == 0)
            {
                printf("%s, you have been placed in a diploma course", studentName);
                return;
            }
            else if (strcmp(studentGrade, "D+") == 0 || strcmp(studentGrade, "D") == 0 || strcmp(studentGrade, "D-") == 0)
            {
                printf("%s, you have been placed in a certificate course", studentName);
                return;
            }
            else if (strcmp(studentGrade, "E") == 0)
            {
                printf("%s, you have been placed in an artisan course", studentName);
                return;
            }
            else
            {
                printf("Invalid Grade. Please try again.\n");
            }
        }

        else if (choice == 2)
        {
            do
            {
                printf("Which course have you completed:\n1. School dropout\n2. Artisan\n3. Certificate\n4. Diploma\n");
                printf("Enter the number of the course you have completed. (Between 1 to 4): ");
                scanf("%d", &option);
                if (option == 1)
                {
                    printf("%s, you have been placed in an Artisan course", studentName);
                    return;
                }
                else if (option == 2)
                {
                    printf("%s, you have been placed in a Certificate course", studentName);
                    return;
                }
                else if (option == 3)
                {
                    printf("%s, you have been placed in a Diploma course", studentName);
                    return;
                }
                else if (option == 4)
                {
                    printf("%s, you have been placed in a Degree course", studentName);
                    return;
                }
                else
                {
                    printf("Invalid option. Please try again.\n");
                }
            } while (option != 4);
        }

        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 2);
    return 0;
}