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

// This function compares three numbers to find the highest number.
int maxNum(int num1, int num2)
{
    // Variable to store highest number result.
    int maxNumResult;

    // Checks highest out of three numbers.
    if(num1 >= num2 && num1 >= num3){
            // num1 is the highest number.
            maxNumResult = num1;
    } else if(num2 >= num1 && num2 >= num3){
        // num2 is the highest number.
        maxNumResult = num2;
    } else{
        // num3 is the highest number.
        maxNumResult = num3;
    }

    // Returns result.
    return maxNumResult;
}

// Main function.
int main()
{
    // Calling function - maxNum
    printf("Max Number: %d\n", maxNum(100, 200)); // Highest number on the right.
    printf("Max Number: %d\n", maxNum(300, 400)); // Highest number on the right.
    printf("Max Number: %d\n", maxNum(800, 500)); // Highest number on the left.
    return 0;
}

// Program end.
