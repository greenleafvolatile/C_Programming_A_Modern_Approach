#include <stdio.h>

int main(void){
    
    char ch;
    float sum, operand;
    printf("Enter an expression: ");
    scanf("%f", &sum);
    while((ch=getchar())!='\n'){
        scanf("%f", &operand);
        switch(ch){
        case '+':sum=sum+operand;break;
        case '*':sum=sum*operand;break;
        case '-':sum=sum-operand;break;
        case '/':sum=sum/operand;break;
        }
    }
    printf("Value of the expression is: %f", sum);
    return 0;
}


                







    


