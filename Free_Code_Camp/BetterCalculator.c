/*
Name: Ahmed Affaan
Title: BetterCalculator.c
Folder: C/Free_Code_Camp
Date: 21/07/2022
Country: Republic of Maldives
Code version: -
Description: Calculator with 4 basic arithmetic operations.
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
    // Variables to store numbers and operator.
    double num1, num2;
    char op;

    // Asking for user input.
    printf("--------------------\n"); // Separator.
    printf("Enter number 01: ");
    scanf("%f", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter number 02: ");
    scanf("%d", &num2);
    printf("--------------------\n"); // Separator.

    return 0;
}

// Program end.
