#include <stdio.h>
#include <math.h>

int main(void){

int radius;
printf("Please enter the radius for a sphere: \n");
scanf("%d", &radius);
printf("The volume of a sphere with radius %d is: %.2f\n", radius, 4.0f/3.0f*M_PI*radius*radius*radius);
return 0;
}

