#include <stdio.h>

int main(void){
    int itemNumber;
    float unitPrice;
    int day;
    int month;
    int year;
    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%7f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%4.2f\t\t%-2.2d/%-2.2d/%-4d\n", itemNumber, unitPrice, month, day, year);
    return 0;
}




