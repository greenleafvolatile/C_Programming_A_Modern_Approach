/* Modify Programming Project 11 from Chaper 7 so that the program labels the output. The program will need
  to store the last name(but not the first name) in an array of characters until it can be printed. You may assume that the last name
  is no more than 20 characters long."*/ 

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int n=0;
    char ch, initial;
    char lastName[20];

    printf("Enter a first and last name: ");
    while ((ch = getchar()) == ' '); //Skip initial white space until first char
    initial = ch;
    while ((ch = getchar()) != ' '); //Skip chars after first char until whitespace

    while ((ch = getchar()) != '\n') {
        if (ch != ' '){
            lastName[n++]=ch;
        }
    }
    printf("You entered the name: ");
    for(int index=0;index<n;index++){
        printf("%c", lastName[index]);
    }
    printf(", %c", initial);
    return 0;
}



