/*
Name: Ahmed Affaan
Title: printf.c
Folder: C/Free_Code_Camp
Date: 09/07/2022
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
    // Variables (Format Specifiers).
    int favNum = 6000;
    char myString[] = "total";
    char myChar = 'i';

    // Printing a message.
    printf("Hello World!\n");

    // Printing a message (New Line).
    printf("Hello\nWorld!\n");

    // Printing a message (Quotation Marks included).
    printf("Hello\"World\n");

    // Printing a message (Format Specifiers).
    printf("The total is: %d\n", 6000); // Integers (%d).
    printf("The %s is: %d\n", "total", 6000); // Strings (%s).
    printf("The %s is: %f\n" , "total", 6000.987541); // Decimals (%f).

    // Printing a message (Format Specifiers + Variables).
    printf("The %s is: %d\n", myString, favNum); // String + Integer.
    printf("The character is: %c\n", myChar); // Character.

    return 0;
}

// Program end.
