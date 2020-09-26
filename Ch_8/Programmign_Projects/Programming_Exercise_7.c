#include <stdio.h>

int main(void){


    int array[5][5]={{8, 3, 9, 0, 10},
                     {3, 5, 17, 1, 1},
                     {2, 8, 6, 23, 1},
                     {15, 7, 3, 2, 9},
                     {6, 14, 2, 6, 0}};

    int rowSum[5], columnSum[5];
    int sum=0;

    for(int row=0;row<5;row++){
        for(int column=0;column<5;column++){
            sum+=array[row][column];
        }
        rowSum[row]=sum;
        sum=0;
    }

    for(int column=0;column<5;column++){
       for(int row=0;row<5;row++){
          sum+=array[row][column];
       }
       columnSum[column]=sum;
       sum=0;
    }

    printf("Row totals: ");
    for(int i=0;i<5;i++) printf("%d ", rowSum[i]);

    printf("\nColumn totals: ");
    for(int i=0;i<5;i++) printf("%d ", columnSum[i]);
    printf("\n");
    return 0;
}


