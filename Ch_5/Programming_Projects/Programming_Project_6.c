#include<stdio.h>

int main(void){
    int first, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit, first_sum, second_sum, total;
    
    printf("Enter the first (single) digit: ");
    scanf("%1d", &first);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the last digit: ");
    scanf("%1d", &check_digit);

    first_sum=first+i2+i4+j1+j3+j5;
    second_sum=i1+i3+i5+j2+j4;
    total=3*first_sum+second_sum;
    if (check_digit==9-((total-1)%10)) printf("VALID\n");
    else printf("INVALID\n");

    return 0;
}
