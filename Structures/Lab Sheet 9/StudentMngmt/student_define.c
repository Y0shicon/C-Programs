#include "student_define.h"

#include <stdio.h>

float findAverage(student stu1)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += stu1.marks[i];
    }
    return (float)sum / 5;
}

student newStudent()
{
    student stu1;

    printf("\nEnter ID : ");
    scanf("%d", &stu1.ID);
    printf("\nEnter name : ");
    scanf("%s", stu1.name);
    for (int i = 0; i < 5; i++)
    {
        int marks;
        printf("Enter marks for course %d : ", i + 1);
        scanf("%d", &marks);
        stu1.marks[i] = marks;
    }
    stu1.average = findAverage(stu1);

    return stu1;
}

void printStudent(student stu1)
{
    printf("\nID : %d", stu1.ID);
    printf("\nName : %s", stu1.name);
    printf("\nMarks : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", stu1.marks[i]);
    }
    printf("\nAverage : %f", stu1.average);
}