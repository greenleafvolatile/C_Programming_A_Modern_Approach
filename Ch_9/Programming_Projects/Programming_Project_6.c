#include <stdio.h>
#include <math.h>

int
computePolynomial(int value);

int
main(void){

    int x;
    printf("Please enter a value for x: ");
    scanf("%d", &x);
    printf("The result is: %d", computePolynomial(x));
    return 0;
}

int
computePolynomial(int value){

    return (3 * pow(value, 5)
            + 2 * pow(value, 4)
            - 5 * pow(value, 3)
            - pow(value, 2)
            + 7 * value
            - 6);
}
