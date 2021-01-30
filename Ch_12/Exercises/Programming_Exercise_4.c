/* "Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use the pointer variable top_ptr instead of the integer variable top." */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Macros

#define STACK_SIZE 4

// Prototypes

void
make_empty(void);

bool
is_empty(void);

bool
is_full(void);

void
push(int i);

int 
pop(void);

void
print_array(void);

// Global variables

int contents[STACK_SIZE];
int *top_ptr;

int
main(void) {

    top_ptr = contents;
    printf("Is empty: %s\n", is_empty() == 1 ? "True" : "False");
    push(1);
    push(2);
    push(3);
    push(4);
    printf("Is full: %s\n", is_full() == 1 ? "True" : "False");
    make_empty();
    printf("Is empty: %s\n", is_empty() == 1 ? "True" : "False");
    return (EXIT_SUCCESS);

}

void
make_empty(void) {
    top_ptr = contents;
}

bool
is_empty(void) {
    return top_ptr == contents;
}

bool
is_full(void) {
    return top_ptr == &contents[STACK_SIZE];
}

void push(int i) {
    if (is_full()) {
        printf("Stack overflow! Stack is full.");
    } else {
        *top_ptr++ = i;
    }
}

int
pop(void) {
    if (is_empty()) {
        printf("Stack underflow! Stack is empty.");
        exit(0); // exit(0) or return 0? Or another option?
    } else {
        return *(--top_ptr);
    }
}

void
print_array(void) {
    for (int i = 0; i < STACK_SIZE; i++) {
        printf("%d\n", contents[i]);
    }
}


        










