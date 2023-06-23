#ifndef STUDENT_DEFINE_H
#define STUDENT_DEFINE_H

typedef struct {
    int ID;
    char name[25];
    int marks[5];
    float average;
} student;

// Finds and returns the average
float findAverage(student stu1);

// takes user input and returns a student
student newStudent();

// Prints the student details
void printStudent(student stu1);

#endif // STUDENT_DEFINE_H