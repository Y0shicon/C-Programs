#include <stdio.h>

void addition(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int arr3[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void multiply(int row1, int col1,int row2, int col2, int arr1[row1][col1], int arr2[row2][col2], int arr3[row1][col2]){
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            int prod = 0;
            for (int k = 0; k < col1; k++)
            {
                prod += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = prod;
        }
    }
}

void printMatrix (int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    // Take input from user
    int rows1, rows2, col1, col2; 

    printf("Enter the details of matrix 1\n");
    printf("Enter the number of rows : ");
    scanf("%dd", &rows1);
    printf("Enter the number of columns : ");
    scanf("%dd", &col1);

    printf("Enter the details of matrix 2\n");
    printf("Enter the number of rows : ");
    scanf("%dd", &rows2);
    printf("Enter the number of columns : ");
    scanf("%dd", &col2);

    int M1[rows1][col1],M2[rows2][col2];

    printf("Enter the values for matrix 1\n");
    for (int i = 0; i < rows1; i++)
    {
        printf("Enter %d values for row %d : ", col1, i + 1);
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &M1[i][j]);
        }
    }

    printf("Enter the values for matrix 2\n");
    for (int i = 0; i < rows2; i++)
    {
        printf("Enter %d values for row %d : ", col2, i + 1);
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &M2[i][j]);
        }
    }    

    printf("\nMatrix 1 : \n");
    printMatrix(rows1, col1, M1);
    printf("Matrix 2 : \n");
    printMatrix(rows2, col2, M2);

    // Adition of matrix
    if (rows1 == rows2 && col1 == col2){
        int AddedMatrix [rows1][col1];
        addition(rows1, col1, M1, M2, AddedMatrix);
        printf("Matrix 3 (Addition): \n");
        printMatrix(rows1, col1, AddedMatrix);
    }
    else{
        printf("Cant add the two matrix \n ");
    }

    // Multiplication of matrix
    if (rows2 == col1){
        int MultiMatrix[rows1][col2];
        multiply(rows1, rows2, col1, col2, M1, M2, MultiMatrix);
        printf("Matrix 4 (Multiplication) : \n");
        printMatrix(rows1, col2, MultiMatrix);
    }
    else{
        printf("Cant multiply the two matrix \n");
    }


    return 0;
}