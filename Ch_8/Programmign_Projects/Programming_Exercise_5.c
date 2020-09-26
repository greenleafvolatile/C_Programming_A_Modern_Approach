/* "Modify the interest.c program of Section 8.1 so that it compounds interest monthly
   instead of annualy. The form of the output shouldn't change; the balance should still
   be shown at annual intervals." */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void){
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter monthly interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for(int i = 0; i<NUM_RATES; i++){
        printf("%10d%%", low_rate+i);
        value[i]=INITIAL_BALANCE;
    }
    printf("\n");

    for(year = 1; year<num_years;year++){
        printf("%3d   ", year);

        for(i = 0; i < NUM_RATES; i++){
            for(int month=1;month<=12;month++){

                value[i]+=(low_rate+i)/100.00 * value[i];
            }
            printf("%12.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}




