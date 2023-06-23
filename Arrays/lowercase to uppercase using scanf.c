#include <stdio.h>
#include <ctype.h>

int main(){
    char string[40];
    int i = 0;

    // Inputting the first string as the loop will accept characters from index 1
    scanf("%c", &string[0]);

    // When the line detects an enter press(new line character), loop is exited
    while (string[i] != '\n'){
        // i++ is above, as if it is below, the while statement will check the indexes of string which have not been assigned yet. So it checks for only garbage values
        i++;
        scanf("%c", &string[i]);
    }

    //switching the newline character with endline character
    string[i] = '\0';
    
    //changing to uppercase
    i = 0;
    while (string[i] != '\0'){
        printf("%c",toupper(string[i]));
        i++;
    }
    printf("\n");
    return 0;
}