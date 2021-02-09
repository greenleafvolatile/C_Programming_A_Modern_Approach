#include <stdio.h>

#define COLUMNS 4

int 
sum_two_dimensional_array(const int[][4], int rows);

int
main(void) {
    
    int array[][4] = { {2, 1, 4, 3},
        
                       {9, 5, 8, 6} };

    printf("The sums of the values in this 2D-array is %d", sum_two_dimensional_array(array, sizeof(array) / sizeof(array[0])));
}

int
sum_two_dimensional_array(const int array[][4], int rows) {

    int sum = 0;
    const int *p = array[0];
    for(; p < array[0] + rows * COLUMNS; p++) {
       sum += *p;
    }
    return sum; 
}




            



    
    

