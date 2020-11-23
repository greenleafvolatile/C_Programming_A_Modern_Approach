#include <stdio.h>
#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void){
    int year1, year2, month1, month2, day1, day2;
    BOOL isDate1BeforeDate2=FALSE;    
    printf("Enter first date (dd/mm/yy): ");
    scanf("%d/%d/%d", &year1, &month1, &day1);
    printf("Enter second date (dd/mm/yy): ");
    scanf("%d/%d/%d", &year2, &month2, &day2);
    if(year1<year2){
        isDate1BeforeDate2=TRUE;
    }
    else if(year1==year2 && month1<month2){
        isDate1BeforeDate2=TRUE;
    }
    else if(year1==year2 && month1==month2 && day1<day2){
        isDate1BeforeDate2=TRUE;
    }
    if(isDate1BeforeDate2){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", year1, month1, day1, year2, month2, day2);
    }
    else{
        
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", year2, month2, day2, year1, month1, day1);
    }
    return 0;
}




