#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ID[20];
    char name[30];
    char Dept[30];
    int math_marks;
    int phy_marks;
    int chem_marks;
}RECORD;

void fun3(RECORD *recordArray , int count){
    int min;
    for (int i = 0; i < count; i++){
        min = i;
        for (int j = i+1; j < count; j++)
        {
            if ((recordArray+j)->math_marks < (recordArray+min)->math_marks)min = j;
        }
        RECORD TEMP = *(recordArray+i);
        *(recordArray + i) = *(recordArray + min);
        *(recordArray + min) = TEMP;
    }
}

void printRecord(RECORD r1){
    printf("\nID : %s", r1.ID);
    printf("\nName : %s", r1.name);
    printf("\nDepartment : %s", r1.Dept);
    printf("\nMath marks : %d", r1.math_marks);
    printf("\nPhysics marks : %d", r1.phy_marks);
    printf("\nChemistry marks : %d", r1.chem_marks);
}

void printAllRecord (RECORD * recordArray, int size){
    for (int i = 0; i < size; i++)printRecord(recordArray[i]);
    printf("\n");
}

int main(){
    RECORD * recordArray;
    int numStudents;
    printf("Enter the number of students : ");
    scanf("%d", &numStudents);

    recordArray = (RECORD *) malloc(sizeof(RECORD) * numStudents);

    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter ID : ");
        scanf("%s", (recordArray+i)->ID);
        printf("Enter Name : ");
        scanf("%s", (recordArray+i)->name);
        printf("Enter Department : ");
        scanf("%s", (recordArray+i)->Dept);
        printf("Enter your maths marks : ");
        scanf("%d", &(recordArray+i)->math_marks);
        printf("Enter your physics marks : ");
        scanf("%d", &(recordArray+i)->phy_marks);
        printf("Enter your chemistry marks : ");
        scanf("%d", &(recordArray+i)->chem_marks);
    }
    
    printAllRecord(recordArray, numStudents);
    fun3(recordArray, numStudents);
    printAllRecord(recordArray, numStudents);


    return 0;
}