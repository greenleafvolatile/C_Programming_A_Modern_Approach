/********************************************************************************************
 * "Write a loop that prints the highest temperature in the tempreatures array (see Exercise*
 * 14) for each day of the week. The loop body should call the find_largest function        *
 * passing it one row of the array at a time."                                              *
 ********************************************************************************************/

// Directives

#include <stdio.h>
#include <stdlib.h>

// Macros

#define ROWS 7
#define COLUMNS 24

// Prototypes

int
find_largest(const int *p);

int
main(void) {

    int temperatures[ROWS][COLUMNS] = { {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 34, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 12, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 33, 31, 31, 32, 31, 30, 28, 27, 27}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 35, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 32, 31, 31, 32, 31, 30, 28, 27, 28}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 30, 33, 31, 31, 31, 32, 31, 30, 28, 27, 29}, 
                                        {25, 25, 24, 25, 26, 26, 27, 27, 27, 28, 29, 30, 30, 37, 31, 31, 31, 31, 32, 31, 30, 28, 27, 26}};

    int *end_of_array = (int *) (&temperatures + 1) - 1;

    int *p = temperatures[0]; 
    
    int day_number = 1;

    for (; p < end_of_array; p += COLUMNS) {

        printf("The highest temperature on day %d is: %d\n", day_number, find_largest(p));
        day_number++;

    }
    return(EXIT_SUCCESS);
}

/**
 * This method returns the largest value in a one-dimensional array.
 * @return the largest value in the array.
 */
int
find_largest(const int *p) {

    int largest = *p;
    const int *pointer_to_last_element_in_array = p + COLUMNS;
    for (; p < pointer_to_last_element_in_array; p++) {
        if (*p > largest) {
            largest = *p;
        }
    }
    return largest;
}


