#include <stdio.h>

int main(){
    int *p, q[] = {1,2,4,2,5};
    p = q;

    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(p+i));
    }
    
}