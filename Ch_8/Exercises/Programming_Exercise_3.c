/* "Modify the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears in the number." */

#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void){

    int numberOfDigits[10]={0};
    int digit;
    long n;

    do{

    printf("Enter a number (0 to quit): ");
        

    scanf("%ld", &n);
    
    if(n==0) break;

    while(n>0){
        digit = n % 10;
        numberOfDigits[digit]++;
        n /= 10;
    }

    printf("%-12s", "Digit:");
    for(int i=0;i<sizeof(numberOfDigits)/sizeof(numberOfDigits[0]);i++) printf("%d ", i);
    
    printf("\n%-12s", "Occurences:");
    for(int i=0; i<sizeof(numberOfDigits)/sizeof(numberOfDigits[0]) ;i++){
        printf("%d ", numberOfDigits[i]);
    }
    printf("\n");
    }while(TRUE);


    return 0;
}

