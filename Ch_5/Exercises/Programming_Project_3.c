/* Calculate a broker's commission */

#include <stdio.h>

int main(void){
    int shares;
    float price, commission, competitorCommission,  value;
    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter price per share: ");
    scanf("%f", &price);

    value=price*shares;
    
    if(value<250.00f)
        commission=30.00f + .017f * value;
    else if(value<6250.00f)
        commission=56.00f + .0066f * value;
    else if(value<2000.00f)
        commission=76.00f + .0034f * value;
    else if(value<50000.00f)
        commission=100.00f + .0022f  *value;
    else if(value<500000.00f)
        commission=155.00f + .0011f * value;
    else 
        commission=255.00f + .0009f * value;

    if(commission<39.00f)
        commission=39.00f;

    if(shares<2000){
        competitorCommission=33.00f + .03f*shares;
    }
    else if(shares>=2000){
        competitorCommission=33.00f + .02f*shares;
    }
    
    printf("Commission: $%.2f\n", commission);
    printf("Competitor commission: $%.2f\n", competitorCommission);

    return 0;
}


