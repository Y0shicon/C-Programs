#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size){
    for (int i = 0; i < size; i++)printf("%d \t", *(arr+i));
    printf("\n");
}

int dotProd(int *arr1, int *arr2, int size){
    int result = 0;
    for (int i = 0; i < size; i++)result += *(arr1+i) * *(arr2+i);
    return result;
}

int main(){
    int arrLen, *arr1, *arr2;
    printf("Enter the number of elements : ");
    scanf("%d", &arrLen);

    //Allocating memory to arr
    arr1 = (int *)malloc(sizeof(int) * arrLen);
    arr2 = (int *)malloc(sizeof(int) * arrLen);

    //Taking input from user
    printf("Enter the elements of array 1 : ");
    for (int i = 0; i < arrLen; i++)scanf("%d", (arr1+i));
    printf("Enter the elements of array 2 : ");
    for (int i = 0; i < arrLen; i++)scanf("%d", (arr2+i));

    printf("Array 1 : ");
    printArray(arr1, arrLen);
    printf("Array 2 : ");
    printArray(arr2, arrLen);

    printf("Dot product of the two arrays is : %d", dotProd(arr1, arr2, arrLen));

    return 0;
}