/*
Name: Ahmed Affaan
Title: BasicCalculator.c
Folder: C/Free_Code_Camp
Date: 18/07/2022
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
    // Variables to store user given number 1 and 2.
    double num1;
    double num2;

    // Prompting user to enter two numbers.
    printf("--------------------\n"); // Separator.
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("--------------------\n"); // Separator.
    // Calculates the answer (Addition).
    printf("Answer: %f\n", num1 + num2);
    printf("--------------------\n"); // Separator.

    return 0;
}

// Program end.
