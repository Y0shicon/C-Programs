#include <stdio.h>
#define MAX_SIZE 10

int findIndex(int array[], int key)
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (array[i] > key || array[i] == -1)
        {
            return i;
        }
    }
    return -1;
}

int printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}

int main()
{
    int count = 7, key;
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 8, -1, -1, -1};

    while (1)
    {
        printf("Enter a number to be added to the sorted array : ");
        scanf("%d", &key);

        int indexToBeAdded = findIndex(arr, key);

        printf("Index for %d to be added is %d \n", key, indexToBeAdded);

        for (int i = count; i >= indexToBeAdded; i--)
        {
            if (i != indexToBeAdded)
            {
                arr[i] = arr[i - 1];
            }
            else
            {
                arr[i] = key;
            }
        }
        count++;

        printArray(arr, MAX_SIZE);
    }

    return 0;
}