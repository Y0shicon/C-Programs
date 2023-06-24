#include <stdio.h>

int main()
{
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int *ptr = &matrix[0][0];

    for (int i = 0; i < 4; i++)
    {
        printf("%d \t", *ptr);
        ptr++;
    }
    printf("\n");

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int i = 1, j = 2;
    printf("\n Data at *(arr+i)+j = %d", *(*(arr + i) + j));
    printf("\n Data at *(arr+i+j) = %d", *(*(arr + i + j)));
}