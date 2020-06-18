#include <stdio.h>

int
power(int base, int exponent);

int
main(void){

    int base, exponent;
    printf("Please enter a value for the base: ");
    scanf("%d", &base);
    printf("Please enter a value for the exponent: ");
    scanf("%d", &exponent);
    printf("%d to the power %d is: %d", base, exponent, power(base, exponent));
    return 0;
}
            
int
power(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    else if(exponent % 2 == 0){
        return power(base, exponent / 2) * power(base, exponent / 2);
    }
    else{
        return base * power(base, exponent - 1);
    }
}



