/*
Name: Ahmed Affaan
Title: MadLibsGame.c
Folder: C/Free_Code_Camp
Date: 18/07/2022
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
    // Variables to store colour, plural noun and celebrity.
    char colourName[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    // Prompting the user to give information.
    printf("--------------------\n"); // Separator.
    printf("Enter a Colour: ");
    scanf("%s", colourName);
    printf("Enter a Plural Noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a Celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);
    printf("--------------------\n"); // Separator.

    // Print messages for MadLibs.
    printf("Roses are %s\n", colourName);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
    printf("--------------------\n"); // Separator.

    return 0;
}

// Program end.
