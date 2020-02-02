#include <stdio.h>

int main(void){
float amount;
float interest=5.0/100;
printf("Enter an amount: ");
scanf("%f", &amount);
printf("With tax added: %.2f\n", amount+(amount*interest));
return 0;
}



