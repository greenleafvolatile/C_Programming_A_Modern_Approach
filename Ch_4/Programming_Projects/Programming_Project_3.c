#include <stdio.h>

int main(void){
    int first, second, third;
    printf("Enter a three-digit number: ");
    scanf("%1.1d%1.1d%1.1d", &first, &second, &third);
    printf("The reversal is: %d%d%d", third, second, first);
    return 0;
}


