#include <stdio.h>

int main(void){
    int windSpeed;
    printf("Enter a wind speed (in knots): ");
    scanf("%d", &windSpeed);
    if(windSpeed > 63){
        printf("Hurricane.");
    }
    else if(windSpeed > 48){
        printf("Storm.");
    }
    else if(windSpeed > 28){
        printf("Gale.");
    }
    else if(windSpeed > 4){
        printf("Breeze.");
    }
    else if(windSpeed > 1){
        printf("Light air");
    }
    else{
        printf("Calm.");
    }
    return 0;
}

