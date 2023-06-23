#include <stdio.h>

int printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}

int printDecendingArray (int arr[], int n){
    for (int i = n-1 ; i >= 0; i--)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    return 0;
    
}

int main(){
    int decimal, binary[50];
    printf("Enter a decimal number : ");
    scanf("%d", &decimal);

    int dividend = decimal, size = 0;
    for (int i = 0; dividend > 0; i++)
    {
        binary[i] = dividend % 2;
        dividend /= 2;
        size += 1;
    }

    printf("size : %d \n", size);
    printDecendingArray(binary, size);
    
}