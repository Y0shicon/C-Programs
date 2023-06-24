#include <stdio.h>

void function(char **ptr)
{
    char *ptr1;
    ptr1 = (ptr + 2)[-2];
    printf("%s\n", ptr1);
    // printf("%s", *(ptr+1));
}

int main()
{
    char *arr[] = {"ant", "bat", "cat", "dog", "egg", "fly"};
    function(arr);
    return 0;
}
