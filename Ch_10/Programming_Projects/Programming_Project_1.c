#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 100

/* external variables */

int top = 0;
char contents[STACK_SIZE];

/* Prototypes */

void
make_empty(void);

bool
is_full(void);

bool
is_empty(void);

void
push(char);

char
pop(void);

void
stack_overflow(void);

void
stack_underflow(void);

    
int 
main(void) {
    char ch;
    printf("Enter parentheses and/or braces: ");
    scanf("%c", &ch);
    do{ 
        if (ch == '{' || ch == '(') {
            push(ch);
        }
        else if (ch == '}' && pop() != '{')  {
                printf("Parentheses/braces aren't nested properly");
                break;
        }

        else if (ch == ')' && pop() != '(') {
                printf("Parentheses/braces aren't nested properly");
                break;
        }
        scanf("%c", &ch);

    } while (ch != '\n');

    if (top != 0) {
        printf("Parentheses/braces aren't matched.");
    }
    else { 
        printf("Parentheses are matched.");
    }
}


void
make_empty(void) {
    top = 0;
}

bool
is_full(void) {

    return top == STACK_SIZE;
}

bool
is_empty(void) {

    return top == 0;
}

void
push(char ch) {

    if (is_full()) {
        stack_overflow();
    }
    else {
        contents[top++] = ch;
    }
}

char
pop(void) {

    char ch;
    if (is_empty()) {
        stack_underflow();
    }
    else {
        ch = contents[--top];
    }
    return ch;
}


void
stack_underflow(void) {
    printf("stack underflow.");
    exit(EXIT_FAILURE);
}

void
stack_overflow(void) {
    printf("stack overflow");
    exit(EXIT_FAILURE);
}




        



