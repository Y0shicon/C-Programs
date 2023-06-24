#include <stdio.h>
#include <stdlib.h>
#define noOfElem 5

void printIntArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d \t", *(arr + i));
    printf("\n");
}

void printFloatArray(float *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%f \t", *(arr + i));
    printf("\n");
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        return 0;
    int numInt = atoi(argv[1]);
    int numFloat = atoi(argv[2]);

    // Create a double-pointer of type void
    void **new2D = (void **)malloc(sizeof(int *) + sizeof(float *));

    // Allocate memory for the integer array in the first row
    int *intArray = (int *)malloc(numInt * sizeof(int));
    new2D[0] = intArray;

    // Allocate memory for the float array in the second row
    float *floatArray = (float *)malloc(numFloat * sizeof(float));
    new2D[1] = floatArray;

    // Read values for the integer array
    printf("Enter values for the integer array:\n");
    for (int i = 0; i < numInt; i++) {
        scanf("%d", &intArray[i]);
    }

    // Read values for the float array
    printf("Enter values for the float array:\n");
    for (int i = 0; i < numFloat; i++) {
        scanf("%f", &floatArray[i]);
    }

    // Print the 2D array
    printf("\n2D Array:\n");
    printf("Integer Array: ");
    printIntArray(intArray,numInt);

    printf("Float Array: ");
    printFloatArray(floatArray,numFloat);

    // Free the allocated memory
    free(intArray);
    free(floatArray);
    free(new2D);

    //return 0
    return 0;
}