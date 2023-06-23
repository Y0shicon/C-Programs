#include "student_define.h"
#include "student_list.h"

#include <stdio.h>

int main(){
    count = 0;
    int noStu;
    printf("Enter the number of students : ");
    scanf("%d", &noStu);

    // Making noStu number of students
    for (int i = 0; i < noStu; i++)
    {
        student stu = newStudent();
        addStudent(stu);
    }

    printAllStudents();

    return 0;
}