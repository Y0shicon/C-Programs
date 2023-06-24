#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size){
    for (int i = 0; i < size; i++)printf("%d \t", *(arr+i));
}

void fun1(int *arr, int size){
    int temp = *arr;
    *arr = *(arr+size-1);
    *(arr+size-1) = temp;
}

int main(){
    int *arr = (int*)malloc(sizeof(int)*10);
    for (int i = 0; i < 10; i++)*(arr+i) = i+1;
    fun1(arr, 10);
    printArray(arr, 10);
    free(arr);
    return 0;
}