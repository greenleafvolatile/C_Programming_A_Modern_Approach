#include <stdio.h>

int findCommonMultiple(int, int);

int main(void){
    int num1, denom1, num2, denom2, result_denom, result_num;
    char operand;

    printf("Enter two fractions separated by a +, -, / or x sign: ");
    scanf("%d / %d", &num1, &denom1);
    scanf(" %c", &operand);
    scanf("%d / %d",&num2, &denom2);
    switch(operand){
        case '+' : result_num=num1*denom2+denom1*num2; result_denom=denom1*denom2;
                   break;
        case '-' : ;result_denom=findCommonMultiple(denom1, denom2); result_num=((result_denom/denom1)*num1)-((result_denom/denom2)*num2);
                   break;
        case '/' : ;result_num=num1*denom2; result_denom=denom1*num2;
                   break;
        case 'x' : ;result_num=num1*num2; result_denom=denom1*denom2;
                   break;
        default  : printf("Unrecognized operand!"); return 0;
    }

    printf("%d/%d%c%d/%d=%d/%d", num1, denom1, operand, num2, denom2,  result_num, result_denom);
    
    return 0;
}

int findCommonMultiple(int denom1, int denom2){
    int commonMultiple=2;
    while(!(commonMultiple%denom1==0 && commonMultiple%denom2==0)){
            commonMultiple++;
    }
    printf("Common multiple: %d\n", commonMultiple);
    return commonMultiple;
}

    

