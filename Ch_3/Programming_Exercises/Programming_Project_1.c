#include <stdio.h>

int main(void){
    int day;
    int month;
    int year;
    printf("Please enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("The date is: %d%.2d%.2d", year, month, day);
    return 0;
}



