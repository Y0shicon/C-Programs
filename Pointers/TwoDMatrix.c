#include <stdio.h>

int main(){
    int matrix[2][2] = {{1,2}, {3,4}};
    int * ptr = &matrix[0][0];

    for (int i = 0; i < 4; i++){
        printf("%d \t", *ptr);
        ptr++;
    }
    
}