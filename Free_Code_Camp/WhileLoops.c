/*
Name: Ahmed Affaan
Title: WhileLoops.c
Folder: C/Free_Code_Camp
Date: 23/07/2022
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
int main(){
    // Variables holds values needed to increment.
    int index = 1;
    int indexA = 6;

    // Increments index until meets the given value.
    while(index <= 5){
        printf("%d\n", index); // Index value.
        index++;
    }

    /*
    // Example - Infinite loop.
    while(index <= 5){
        // Index not incremented so an infinite loop.
        printf("%d\n", index); // Index value.
    }
    */

    return 0;
}

// Program end.
