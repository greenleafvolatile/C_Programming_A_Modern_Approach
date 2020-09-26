/*"Modify the repdigit.c program of Section 8.1 so that it shows which digits of
  (if any) were repeated."*/

#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void){

    BOOL isRepeated=FALSE;
    int numberOfDigits[10]={0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n>0){
        digit = n % 10;
        numberOfDigits[digit]++;
        if(numberOfDigits[digit]>=2) isRepeated=TRUE;
        n /= 10;
    }

    if(isRepeated){
        printf("Repeated digits: ");

        for(int i=0; i<sizeof(numberOfDigits)/sizeof(numberOfDigits[0]) ;i++){
            if(numberOfDigits[i]>=2){
                printf("%d ", i);
            }
        }
    }
    else{
        printf("There are no repeated digits\n");
    }

    return 0;
}

