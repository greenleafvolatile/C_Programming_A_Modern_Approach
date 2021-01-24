/* "Section 8.2 had a program fragment in which two nested for loop initialized the array
   ident for use as an identity matrix. Rewrite this code, using a single pointer to step
   through the array one element at a time. Hint: Since we won't be using row and col index
   varaiables, it wont be easy to tell where to store 1. instead, we can use the fact hat the first
   element of the array shold be 1, the next N elements should be 0, the next element should
   be 1, and so forth. Use a variable to keep track of how many consecutive 0s have been stored;
   when the count reaches N, it's time to store 1." */

#include <stdio.h>
#include <stdlib.h>

#define N 20

// Prototypes:
void
fill_array(int *p);

void
print_array(int *p);

int
main(void) {

    int array[N][N];
    fill_array(array[0]);
    print_array(array[0]);
    return(EXIT_SUCCESS);
}

void
fill_array(int *p) {

    int *last_element = p + N * N;
    int counter = 0;

    for(; p < last_element;p++) {

        if (counter == 0) {
            *p = 1;
        } else {
            *p = 0;
        }
        
        counter++;

        if (counter > N) {
            counter = 0;
        }

    }
}

void
print_array(int *p) {

    int *end = p + N * N;
    int counter = 0;

    for (; p < end; p++) {
        
        printf("%d", *p);
        counter++;
        if (counter % N == 0) {
            printf("\n");
        }
    }
}



    
