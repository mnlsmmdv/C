/*
Name: Ahmed Affaan
Title: IfStatements.c
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

// This function compares two numbers to find the highest number.
int maxNum(int num1, int num2)
{
    // Variable to store highest number result.
    int maxNumResult;

    // Checks if num1 or num2 is the highest number.
    if(num1 > num2){
        // num1 is the highest number.
        maxNumResult = num1;
    } else{
        // num2 is the highest number.
        maxNumResult = num2;
    }

    // Returns result.
    return maxNumResult;
}

// Main function.
int main()
{
    // Printing a message.
    printf("Hello World!\n");
    return 0;
}

// Program end.
