/**************************************************************************
* Write a program that reads a message, then prints the reversal of the   *
* messag. Use a pointer instead of an integer to keep track of the current*
* position in the array.                                                  *    
***************************************************************************/

#include<stdlib.h>
#include <stdio.h>

#define SIZE 100

char array[SIZE];

char *
read_input(void);

void
print_in_reverse(char *);

int
main(void) {
    
    print_in_reverse(read_input());

    return EXIT_SUCCESS;
}

char *
read_input(void) {

    printf("Enter a message: ");

    char input_char = getchar();
    char * pointer_to_char = array;
    while(input_char != '\n') {
        *pointer_to_char = input_char;
        pointer_to_char++;
        input_char = getchar();
    }

    return pointer_to_char;
}

void
print_in_reverse(char * pointer_to_char) {


    for (pointer_to_char--; pointer_to_char >= array; pointer_to_char--) {
        putchar(*pointer_to_char);
    }

}


