/*
Name: Ahmed Affaan
Title: UserInput.c
Folder: C/Free_Code_Camp
Date: 17/07/2022
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
    // Variable declarations.
    int age; // Users age.
    double gpa; // Users gpa.

    // Prompting the user to enter age and gpa.
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);

    printf("----------------------\n"); // Separator.

    // Printing the users age and gpa.
    printf("You are %d years old.\n", age);
    printf("Your gpa is %f.\n", gpa);

    return 0;
}

// Program end.
