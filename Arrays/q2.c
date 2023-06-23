#include <stdio.h>
#define SIZE 10

int linearSearch(int arr[], int x){
	for (int i = 0; i < SIZE; i++){
		if (x == arr[i])
			return i;
	}
	return -1;
}

int binarySearch(int arr[], int x){
	int low = 0, high = SIZE, mid;
	for (int i = 0; i < SIZE; ++i)
	{
		mid = (low + high)/2;
		if (x == arr[i])
			return i;
		else if (x > arr[i])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

void selectionSortDec(int arr[]){
    for (int i = 0; i < SIZE; i++){
        int max = i;
        for (int j = i + 1; j < SIZE; j++)
        if (arr[j] > arr[max]) max = j;
    int temp = arr[max];
    arr[max] = arr[i];
    arr[i] = temp;
    }
}

void printArray(int arr[]){
    for (int i = 0; i < SIZE; i++)
    printf("%d \t", arr[i]);
    printf("\n");  
}

void printReverseArray(int arr[]){
    for (int i = SIZE - 1; i >= 0; i--)
    printf("%d \t", arr[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
	int arr[SIZE] = {5,2,7,1,3,6,7,2,10,1};
	
	while (1){
		int userChoice;
		printf("Enter 1 for linear Search\nEnter 2 for bianry search \nEnter 3 for Selection Sort \nEnter 4 to quit \n");
		scanf("%d", &userChoice);

		if (userChoice == 1)
		{
			int x;
			printf("Enter the element to look for\n");
			scanf("%d", &x);
			printf("Element found at %d\n", linearSearch(arr, x));
		}else if (userChoice == 2)
		{
			int x;
			printf("Enter the element to look for\n");
			scanf("%d", &x);
			printf("Element found at %d\n", binarySearch(arr, x));
		}else if (userChoice == 3){
            selectionSortDec(arr);
            printf("Decending Order : \n");
            printArray(arr);
            printf("Reverse Order : \n");
            printReverseArray(arr);
        }

		else{
			printf("Bye Bye SearchNSort!\n");
			break;
		}
	}
}