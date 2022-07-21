/*
Name: Ahmed Affaan
Title: ReturnStatement.c
Folder: C/Free_Code_Camp
Date: 20/07/2022
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

// This function will return a cubed number.
// Functions that returns value declared above main function.
double cubeNumber(double num)
{
    // Variables calculates cubed number and returns it.
    double cubeResult = num * num * num;
    return cubeResult;
}

// Main function.
int main()
{
    // Printing cubed number using user input.
    printf("Cubed Number: %f\n", cubeNumber(3.0));

    return 0;
}

// Program end.
