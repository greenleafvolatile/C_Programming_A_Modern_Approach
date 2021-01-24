/* "Write a program that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, followed bya period." 
   This is not my solution. Found here https://github.com/fordea/c-programming-a-modern-approach/blob/master/ch07/Projects/11.c */
    

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, initial;

    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' '); //Skip initial white space until first char
    initial = ch;
    while ((ch = getchar()) != ' '); //Skip chars after first char until whitespace

    while ((ch = getchar()) != '\n') {
        if (ch != ' ')
            putchar(ch);
    }
    printf(", %c.", initial);

    return 0;
}



