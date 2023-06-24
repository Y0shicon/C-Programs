#include <stdio.h>
#include <stdlib.h>

void printIntArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d \t", *(arr + i));
    printf("\n");
}

void selectionSort(int *arr, int size){
    int min;
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
}

void fun2(int **arr, int rows, int columns){
    for (int i = 0; i < rows; i++)selectionSort(arr[i], columns);
}


int main(int argc, char *argv[]){
    if (argc != 3)return 0;
    
    int numRows = atoi(argv[1]);
    int numCols = atoi(argv[2]);

    int ** matrix;

    // Allocating memory to the double pointer matrix
    matrix = (int **) malloc(numRows * sizeof(int *));
    // Allocating memory to each of rhe rows
    for (int i = 0; i < numCols; i++)matrix[i] = (int *) malloc(numCols * sizeof(int));
    
    // Taking input from the user
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            printf("Enter the element for index [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Prinitng the 2D Matrix
    printf("\nBefore Sorting : \n");
    for (int i = 0; i < numRows; i++)printIntArray(matrix[i], numCols);
    
    //Sorting the matrix
    fun2(matrix, numRows, numCols);

    //Prinitng the 2D Matrix
    printf("\nAfter Sorting : \n");
    for (int i = 0; i < numRows; i++)printIntArray(matrix[i], numCols);
    
}