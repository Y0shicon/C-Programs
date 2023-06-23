#include <stdio.h>

void printArray(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("%d\t", *(arr+i));
    }
}

int main(){
    // You cant define an array like:
    // int *arr = {1,2,5,3,3,1}
    int arr[] = {1,2,4,6,3,2};
    printArray(arr, 6);

    return 0;
}