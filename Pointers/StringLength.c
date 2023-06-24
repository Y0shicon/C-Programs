#include <stdio.h>

int length(char *word)
{
    int len = 0;
    while (*(word+len) != '\0')len++;
    return len;
}

int main()
{
    char *word;
    printf("Enter a string : ");
    scanf("%s", word);
    printf("Length of the word %s is : %d", word, length(word));

    return 0;
}