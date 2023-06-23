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

int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    int series[n];
    for (int i = 0; i < n; i++){
        if (i > 1){
            series[i] = series[i-2] + series [i-1];
        }else{
            series[i] = i;
        }
    }

    printf("The fibonacci series till %d terms is : ", n);
    printArray(series, n);

    return 0;
}