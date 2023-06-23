#include <stdio.h>
// #include "circle.h"
#define PI 3.14

void circleData(int radius, float* areaPtr, float* perimeter){
   *areaPtr = PI * radius * radius;
   *perimeter = 2 * PI * radius;
}