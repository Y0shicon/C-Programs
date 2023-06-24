#include <stdio.h>

void print2Matrix(int **matrix, int rows, int columns){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m[][3] = {{1,2,3}, {4,5,6}};
    int rows = sizeof(m) / sizeof(m[0]);
    int columns = sizeof(m[0]) / sizeof(m[0][0]);
    
    int *matrix[rows];
    for(int i = 0; i < rows; i++){
        matrix[i] = m[i];
    }

    print2Matrix(matrix, rows, columns);

    return 0;
}
