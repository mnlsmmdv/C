/*
Name: Ahmed Affaan
Title: numbers.c
Folder: C/Free_Code_Camp
Date: 16/07/2022
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
    // Variables.
    int num = 6;

    // Prints numbers (Floating points).
    printf("Floating Point Number: %f\n\n", 6.7);

    // Printing basic arithmetic operations.
    printf("------BASIC INTEGERS------\n");
    printf("Addition Total: %d\n", 3 + 2); // Addition.
    printf("Subtraction Total: %d\n", 5 - 3); // Subtraction.
    printf("Multiplication Total: %d\n" , 23 * 1); // Multiplication.
    printf("Division Total: %d\n\n", 20 / 2); // Division.

    // Printing basic arithmetic operations (Floating Points).
    printf("------FLOATING POINTS------\n");
    printf("Addition Total: %f\n", 3.0 + 2.0); // Addition.
    printf("Subtraction Total: %f\n", 5.0 - 3.0); // Subtraction.
    printf("Multiplication Total: %f\n", 23.0 * 1.0); // Multiplication.
    printf("Division Total: %f\n\n", 20.0 / 2.0); // Division.

    // Prints number (Integer + Floating Point).
    printf("Integer + Floating Point: %f\n", 5 + 4.5);

    // Printing variable value.
    printf("Variable Value: %d\n", num);

    // Prints cubed number.
    printf("Cube Number: %f\n", pow(2, 3));

    // Prints square root number.
    printf("Square Root Number: %f\n", sqrt(36));

    // Prints ceiling number (rounds up to next highest number).
    printf("Ceiling Number: %f\n", ceil(36.356));

    // Prints floor number (rounds back to next lowest number).
    printf("Floor Number: %f\n", floor(36.656));

    return 0;
}

// Program end.
