/*
Name: Ahmed Affaan
Title: SwitchStatements.c
Folder: C/Free_Code_Camp
Date: 21/07/2022
Country: Republic of Maldives
Code version: -
Description: -
Credits to: Giraffe Academy
Credits to link: https://www.youtube.com/watch?v=KJgsSFOSQv0
Note: Uncomment codes to execute and comment them when not in use.
*/

// Program start.

// Importing libraries.
#include <stdio.h>
#include <stdlib.h>

// Main function.
int main()
{
    // Variable stores user given grade.
    char grade;

    // Asks for user input.
    printf("+-------------------+\n"); // Separator.
    printf("|   Grade Checker   |\n");
    printf("+-------------------+\n"); // Separator.
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("+-------------------+\n"); // Separator.

    // Validates grade and returns message.
    switch(grade){
    // Great - A
    case 'A':
        printf("You did great!      |\n");
        printf("+-------------------+\n"); // Separator.
        break;
    // Alright - B
    case 'B':
        printf("You did alright!    |\n");
        printf("+-------------------+\n"); // Separator.
        break;
    // Poorly - C
    case 'C':
        printf("You did poorly!     |\n");
        printf("+-------------------+\n"); // Separator.
        break;
    // Very Badly - D
    case 'D':
        printf("You did very badly! |\n");
        printf("+-------------------+\n"); // Separator.
        break;
    // Failed - F
    case 'F':
        printf("You Failed!         |\n");
        printf("+-------------------+\n"); // Separator.
        break;
    // Invalid Grade.
    default:
        printf("INVALID GRADE!      |\n");
        printf("+-------------------+\n"); // Separator.
    }

    return 0;
}

// Program end.
