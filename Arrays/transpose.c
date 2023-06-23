#include <stdio.h>

void printMatrix (int rows, int cols, int arr[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int rows, columns;
    printf("Enter details of matrix : \nEnter number of rows and columns : ");
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns], Tmatrix[columns][rows];

    printf("Enter values for the matrix -> \n");
    for (int i = 0; i < rows; i++){
        printf("Enter %d value(s) for row %d : ", columns, i+1);
        for (int j = 0; j < columns; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix : \n");
    printMatrix(rows, columns, matrix);

    for (int i = 0; i < rows; i ++){
        for (int j = 0; j < columns; j++){
            Tmatrix[j][i] = matrix[i][j];
        }
    }

    printf("Transposed Matrix : \n");
    printMatrix(columns, rows, Tmatrix);

}