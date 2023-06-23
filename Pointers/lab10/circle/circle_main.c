#include "circle.h"
#include <stdio.h>

int main(){
    int radius;
    float area, perimeter;
    printf("Enter the radius : ");
    scanf("%d", &radius);

    circleData(radius, &area, &perimeter);

    printf("Area : %f\n", area);
    printf("Perimeter : %f\n", perimeter);

    return 0;
}