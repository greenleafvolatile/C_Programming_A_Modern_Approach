#include <stdio.h>

int power(int base, int exponent){
int result=1;
for (exponent;exponent>0;exponent--){
result=base*result;
}
return result;
}

int main(void){
int x;
printf("Please enter a value for 'x': ");
scanf("%d", &x);
printf("The value of x\u2075+2x\u2074-5x\u00b3-x\u00b2+7x-6=%d\n", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
return 0;
}
