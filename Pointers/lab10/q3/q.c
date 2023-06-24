#include <stdio.h>
int main()
{
    int arr[10] = {22, 54, 78, 32, 83, 45, 90, 54, 75, 28};
    int *ptr = arr;
    printf("%d\n", *(ptr++));
    ptr = arr;
    printf("%d\n", *ptr++);
    ptr = arr;
    printf("%d\n", *++ptr);
    ptr = arr;
    printf("%d\n", *ptr + 5);
    ptr = arr;
    printf("%d\n", --*ptr);
    return 0;
}