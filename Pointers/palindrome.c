#include <stdio.h>

int length(char *word)
{
    int len = 0;
    while (*(word + len) != '\0')
        len++;
    return len;
}

int isPalindrome(char *word)
{
    int len = length(word), status = 0;

    for (int i = 0; i < len / 2; i++)
    {
        if (*(word + i) != *(word + len - i - 1))return 0;
    }
    return 1;
}

int main()
{
    char *word;
    printf("Enter a string : ");
    scanf("%s", word);
    printf("The palindrome status for the word %s is : %d", word, isPalindrome(word));

    return 0;
}