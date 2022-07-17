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
    char grade; // Users grade.
    char name[20]; // Users name.

    /*
    // Prompting the user to enter age and gpa.
    printf("Enter your age: ");
    scanf("%d", &age);
    // Prints users age.
    printf("You are %d years old.\n", age);
    printf("--------------------\n"); // Separator.
    */

    /*
    // Prompting user to enter their gpa.
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    // Prints users gpa.
    printf("Your gpa is %f.\n", gpa);
    printf("--------------------\n"); // Separator.
    */

    /*
    // Prompting the user to enter their grade.
    printf("Enter your grade: ");
    scanf("%c", &grade);
    // Prints users grade.
    printf("Your grade is %c.\n", grade);
    printf("--------------------\n"); // Separator.
    */

    /*
    // Prompting the user to enter their name.
    // Note that this implementation gets only the first name.
    printf("Enter your name: ");
    scanf("%s", &name);
    // Prints users name.
    printf("Your name is %s.\n", name);
    printf("--------------------\n"); // Separator.
    */

    // Prompting the user to enter their name.
    // This implementation gets the full name - whole line of text.
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    // Prints users name.
    printf("Your name is %s", name);
    printf("--------------------\n"); // Separator.

    return 0;
}

// Program end.
