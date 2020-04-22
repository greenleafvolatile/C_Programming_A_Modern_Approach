/* Prints a table of squares using a for statement. */

#include<stdio.h>

int main(void){
    int n, numberOfSquares=1;
    long i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);
    getchar();
    for(i=1;i<=n;i++){
        printf("%15ld%15ld\n", i, i*i);
        if(numberOfSquares++==2 && i<n){
                
            printf("Press Enter to continue...\n");
            while(getchar()!='\n'){
                printf("Press Enter to continue...\n");
            }
            numberOfSquares=1;
        }
    }
    return 0;
}


