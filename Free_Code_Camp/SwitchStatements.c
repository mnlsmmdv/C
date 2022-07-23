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
    // Variable stores highest grade possible.
    char grade = 'A';

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
        printf("You did great!\n");
        break;
    // Alright - B
    case 'B':
        printf("You did alright!\n");
        break;
    // Poorly - C
    case 'C':
        printf("You did poorly!\n");
        break;
    // Very Badly - D
    case 'D':
        printf("You did very badly!\n");
        break;
    // Failed - F
    case 'F':
        printf("You Failed!");
        break;
    // Invalid Grade.
    default:
        printf("INVALID GRADE!");
    }

    return 0;
}

// Program end.
