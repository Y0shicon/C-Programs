#include <stdio.h>
#define sNo 2
#define marksNo 3

// Defining structure in the global scope
typedef struct{
        char name[20];
        int age;
        float CGPA;
        int marks[marksNo];
    } student;

void printStudent(student S){
    printf("\nName : %s\n", S.name);
    printf("Age : %d\n", S.age);
    printf("CGPA : %f\n", S.CGPA);
}

void computeTotalMarks(student S){
    int sum = 0;
    for (int i = 0; i < marksNo; i++){
        sum += S.marks[i];
    }
    printf("Total marks of student %s are %d\n", S.name, sum);
}

int main(){
    student s[sNo];
    
    for (int i = 0; i < sNo; i ++){
        printf("Enter the name : ");
        scanf("%s", s[i].name);
        printf("Enter age : ");
        scanf("%d", &s[i].age);
        printf("Enter CGPA : ");
        scanf("%f", &s[i].CGPA);
        for (int j = 0; j < marksNo; j++){
            printf("Enter marks for subject %d : ", j + 1);
            scanf("%d", &s[i].marks[j]);
        }
    }

    // Printing the students
    for (int i = 0; i < sNo; i++)printStudent(s[i]);
    

    //Computing marks for everyone
    for (int i = 0; i < sNo; i++)computeTotalMarks(s[i]);

    return 0;
}