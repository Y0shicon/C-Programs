#include "student_define.h"
#include "student_list.h"

void addStudent(student stu1){
    studentLst[count] = stu1;
    count++;
}

void printAllStudents(){
    for (int i = 0; i < count; i++){
        printStudent(studentLst[i]);
    }
}