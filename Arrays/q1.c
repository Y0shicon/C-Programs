#include <stdio.h>

int main()
{
	float floatArray[10];
	for (int i = 1; i<=10; i++){
		printf("Enter the %dth number : ", i);
		scanf("%f", &floatArray[i-1]);
	}

	//Iterating through all values and finding minmax
	float min = 0, min2 = 0, max = 0, max2 = 0;
	// printf("%f%f%f%f\n", min, min2, max,max2);
	for (int i = 0; i < 10; i++){
		float num = floatArray[i];
		switch (i){
			case 0 : min = num;
					break;
			case 1 : if (num > min){
				min2 = num;}
				else{
					min2 = min;
					min = num;
				}
				break;
			case 2: if (num < min)
				{
					max2 = min2;
					min2 = min;
					min = num;		
				}else if (num < min2)	
				{
					max2 = min2;
					min2 = num;
				}else{
					max2 = num;
				}
				break;
			case 3: if (num < min){
				max = max2;
				max2 = min2;
				min2 = min;
				min = num;
				}else if (num < min2) {
					max = max2;
					max2 = min2;
					min2 = num;
				}else if (num < max2){
					max = max2;
					max2 = num;
				}else{
					max = num;
				}
				break;
		}

		if (i > 3)
		{	
			if (num < min){
				min2 = min;
				min = num;
			}else if (num < min2) {
				min2 = num;
				}
			if (num > max){
				max2 = max;
				max = num;
			}else if (num > max2){
				max2 = num;
			}
		}
		printf("\nFor i = %d \nmin = %f\nmin2 = %f\nmax2 = %f\nmax = %f\n", i+1, min, min2, max2, max);

	}
}
