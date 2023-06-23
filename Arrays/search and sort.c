#include <stdio.h>

int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int binarySearch (int arr[], int size, int key){
    int left = 0, right = size-1,mid;

    while (left <= right)
    {
        mid = (left + right)/2;
        if (arr[mid] < key) left = mid + 1;
        else if (arr[mid] > key) right = mid - 1;
        else return mid;
    }
    return -1;
}

void selectionSort (int arr[], int size){
    int min;

    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min]) min = j;
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int array[8] = {11,5,32,6,6,7,8,9};
    int SIZE = sizeof(array)/sizeof(array[0]);
    selectionSort(array, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d \t", array[i]);
    }

    return 0;

}
