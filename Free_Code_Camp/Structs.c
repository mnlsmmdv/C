/*
Name: Ahmed Affaan
Title: Structs.c
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

// Stores multiple attributes to create a Student.
// Struct is similar to objects.
struct Student{
    char studentName[100]; // Stores Student name.
    char studentMajor[100]; // Stores Student major.
    int studentAge; // Stores Student age.
    double studentGpa; // Stores Student gpa.
};

// Main function.
int main()
{
    // Creating a Student - Student 1.
    struct Student student1;
    strcpy(student1.studentName, "Ahmed Affaan");
    strcpy(student1.studentGpa, "Computer Science");
    student1.studentAge = 20;
    student1.studentGpa = 3.2;

    return 0;
}

// Program end.
