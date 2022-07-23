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
int main(){
    // Creating a Student - Student 1.
    struct Student student1;
    strcpy(student1.studentName, "Ahmed Affaan");
    strcpy(student1.studentMajor, "Computer Science");
    student1.studentAge = 20;
    student1.studentGpa = 3.2;

    // Creating a Student - Student 2.
    struct Student student2;
    strcpy(student2.studentName, "Ahmed Mohamed");
    strcpy(student2.studentMajor, "Business Administration");
    student2.studentAge = 22;
    student2.studentGpa = 3.4;

    // Creating a Student - Student 3.
    struct Student student3;
    strcpy(student3.studentName, "Mohamed Ali");
    strcpy(student3.studentMajor, "Electrical Engineering");
    student3.studentAge = 24;
    student3.studentGpa = 3.6;

    // Printing Student 1 details.
    printf("Student Name: %s\n", student1.studentName);
    printf("Student Major: %s\n", student1.studentMajor);
    printf("Student Age: %d\n", student1.studentAge);
    printf("Student GPA: %f\n", student1.studentGpa);

    return 0;
}

// Program end.
