/* "Write a program that evaluates RPN expressions. The operands will be single-digit integers. 
   The operators are +, -, *, / and =. The = operator causes the top stack item to be displayed;
   afterwards, the stack is cleared and the user is prompted to enter another expression. 
   The process continues until the user enters a character that is not an operator or operand.
   If the stack overflows, the program will display the message 'Expression is too complex' 
   and terminate. If the stack underflows (because of an expression such as 12++), 
   the program will display the message 'Not enough operands in expression' and terminate." */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

// external variables:

float operands[STACK_SIZE];
int top = 0;

// prototypes:

void
make_empty(void);

bool
is_full(void);

bool
is_empty(void);

void
push(float value);

float
pop(void);

void
stack_underflow(void);

// entry point into the program:

int 
main(void) {

    float operand_one;
    float operand_two;
    float result;
    char ch;
    

    printf("Enter an RPN expression: ");
    scanf(" %c", &ch);
    while(isdigit(ch) || ch == '-' || ch == '*' || ch == '+' || ch == '/' || ch == '='){
        if (isdigit(ch)) {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            
            operand_two = pop();
            operand_one = pop();
            
            switch (ch) {
                case '+' : result = operand_one + operand_two;
                           break;
                case '-' : result = operand_one - operand_two;
                           break;
                case '*' : result = operand_one * operand_two;
                           break;
                case '/' : result = operand_one / operand_two;
                           break;
            }
            push(result);
        }
        else if (ch == '=') {

            printf("Value of expression: %.1f\n", result);

            make_empty();
            
            printf("Enter an RPN expression ('q' to quit): ");
        }
        else {
            exit(EXIT_SUCCESS);
        }
        scanf(" %c", &ch);
    }
        
    return (EXIT_SUCCESS);
}

void
make_empty(void) {
    top = 0;
}
        
bool
is_full() {
    return top == STACK_SIZE;
}

bool
is_empty(void) {
    return top == 0;
}

void
push(float value) {
    if (is_full()) {
        printf("Expression is too complex.\n");
        exit(EXIT_FAILURE);
    }
    else {
        operands[top++] = value;
    }
}

float
pop(void) {
    if (is_empty()) {
        printf("Not enough operands in expression.\n");
        exit(EXIT_FAILURE);
    }
    else {

        return operands[--top];
   }
}







