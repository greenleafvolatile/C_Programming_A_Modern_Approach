#include <stdio.h>
#include <math.h>


int main(void){
    double x, avg, y=1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    do{
        avg=(x/y+y)/2;
        y=avg;
    }while(fabs(((x/y+y)/2)-y)>0.00001f);
    printf("Square root: %f", y);
    return 0;
}


