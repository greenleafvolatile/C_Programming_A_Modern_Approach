/*
   Write a program that reads a message, then checks
   whether it's a palindrome. Use pointers instead of integers
   to keep track of positions in the array.
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 100


char array[SIZE];

char*
read_input(void);

bool
is_palindrome(char*);

int
main(void) {
    printf("Is palindrome: %s", is_palindrome(read_input()) == 0 ? "false" : "true");
    return EXIT_SUCCESS;
}

/*
  read_input takes input from stdin and stores it in a char array.
 */
char*
read_input(void) {
    char *p;

    printf("Please enter message:");

    for(p = array; p < &array[SIZE]; p++) {
        *p = getchar();
        if (*p == '\n') 
            break;
    }

    return p;
}

/*
  is_palindrome checks if the input stored in the array is a palindrome.
 */
bool
is_palindrome(char *p) {
    bool is_palindrome = true;

    for (char *q = array; q < p; q++, p--) {
        while(!isalpha(*q)) {
            q++;
        } 

        while(!isalpha(*p)) {
            p--;
        }

        if (toupper(*q) != toupper(*p)) {
            is_palindrome = false;
        }
    }
    return is_palindrome;
}



