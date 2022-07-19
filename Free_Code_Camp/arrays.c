/*
Name: Ahmed Affaan
Title: arrays.c
Folder: C/Free_Code_Camp
Date: 19/07/2022
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
    // Array to store list of lucky numbers.
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    // Printing elements in indexes.
    printf("Element at index 00: %d\n", luckyNumbers[0]);
    printf("Element at index 01: %d\n", luckyNumbers[1]);
    printf("Element at index 02: %d\n", luckyNumbers[2]);
    printf("Element at index 03: %d\n", luckyNumbers[3]);
    printf("Element at index 04: %d\n", luckyNumbers[4]);

    // Editing an element at index.
    luckyNumbers[1] = 200;

    // Printing elements in indexes (After modification).
    printf("Element at index 00: %d\n", luckyNumbers[0]);
    printf("Element at index 01: %d\n", luckyNumbers[1]);
    printf("Element at index 02: %d\n", luckyNumbers[2]);
    printf("Element at index 03: %d\n", luckyNumbers[3]);
    printf("Element at index 04: %d\n", luckyNumbers[4]);

    return 0;
}

// Program end.
