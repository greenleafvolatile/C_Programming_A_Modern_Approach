#include <stdio.h>

int main(void){
    int firstSum, secondSum, total, first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, twelfth;
    printf("Enter the first twelve digits of an EAN:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh, &twelfth);
    firstSum=second+fourth+sixth+eighth+tenth+twelfth;
    secondSum=first+third+fifth+seventh+ninth+eleventh;
    total=firstSum*3+secondSum;
    printf("Check digit: %d", 9-(total-1)%10);
    return 0;
}




    

