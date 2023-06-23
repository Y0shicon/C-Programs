#include <stdio.h>
#include <ctype.h>

int main(){
    int size, i = 0;
    char name[50];
    name[0] = getchar();

    printf("%c", name[0]);

    while (name[i] != '\n')
    {
        i++;
        name[i] = getchar();
    }
    name[i] = '\0';
    size = i;

    printf("\nName is %s\n", name);
    for (i = 0; i < size; i++)
        putchar(toupper(name[i]));

    return 0;
}