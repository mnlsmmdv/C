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
    printf("+-------------------+\n"); // Separator.
    printf("|     CALCULATOR    |\n");
    printf("+-------------------+\n"); // Separator.
    printf("Enter number 01: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter number 02: ");
    scanf("%lf", &num2);
    printf("--------------------\n"); // Separator.

    // Does calculations according to operator.
    if(op == '+'){
        printf("Addition Total: %f\n", num1 + num2); // Addition.
        printf("--------------------\n"); // Separator.
    } else if(op == '-'){
        printf("Subtraction Total: %f\n", num1 - num2); // Subtraction.
        printf("--------------------\n"); // Separator.
    } else if(op == '*'){
        printf("Multiplication Total: %f\n", num1 * num2); // Multiplication.
        printf("--------------------\n"); // Separator.
    } else if(op == '/'){
        printf("Division Total: %f\n", num1 / num2); // Division.
        printf("--------------------\n"); // Separator.
    } else{
        printf("INVALID OPERATOR!\n"); // Error.
        printf("--------------------\n"); // Separator.
    }

    return 0;
}

// Program end.
