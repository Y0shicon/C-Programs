#include <stdio.h>

typedef enum{A1, A2, A3, A4}groupLst;
typedef struct Student
{
    char name[20];
    int age;
    groupLst group;
}stu, poke;

void dumb(stu object){
    printf("%d", object.age);
}


int main(){
    poke BSDK = {"Kartik", 18, A2};
    stu mc = {"baahubali", 10, A1};

    dumb(mc);
}