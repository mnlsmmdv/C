/*
Name: Ahmed Affaan
Title: functions.c
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

// Main function.
int main()
{
    // Calling function generally.
    //sayHi();

    /*
    // Example - Calling function with other codes.
    printf("Top\n");
    sayHi();
    printf("Bottom\n");
    */

    // Example - Calling function with parameter value.
    //sayHi("Affaan");

    // Example - Calling function with multiple parameter values.
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);

    return 0;
}

// This function will say Hi to the user.
void sayHi(char name[], int age[])
{
    // Says Hi to the user.
    printf("Hello %s! You are %d years old.\n", name, age);
}

// Program end.
