#include <stdio.h>

int main(void){
    int GSI, groupIdentifier, publisherCode, itemNumber, checkDigit;
    printf("Please enter an ISBN (x-x-x-x-x): ");
    scanf("%d-%d-%d-%d-%d", &GSI, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
    printf("GSI prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem number: %d\nCheck digit: %d\n", GSI, groupIdentifier, publisherCode, itemNumber, checkDigit);
    return 0;
}

