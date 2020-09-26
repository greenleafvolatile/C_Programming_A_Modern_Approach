#include <stdio.h>

int main(void){

int amount;
printf("Please enter a dollar amount: ");
scanf("%d", &amount);
int twentyBill=amount/20;
amount=amount-twentyBill*20;
int tenBill=amount/10;
amount=amount-tenBill*10;
int fiveBill=amount/5;
amount=amount-fiveBill*5;
printf("20$ bills: %d\n10$ bills: %d\n$5 bills: %d\n$1 bills: %d\n", twentyBill, tenBill, fiveBill, amount);
return 0;
}

