/* "Modify Progamming Project 4 from Chapter 7 so that the program labels its output. The program will need to store the pone number
  (either in its original form or in its numeric form) in an array of characters until it can be printed. You may assume that the phone number
  is no more that 15 characters long." */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch; 
    char numericNumber[15];
    char number;
    int index=0;
    printf("Enter phone number: ");
    ch=getchar();
    while(ch!='\n'){
        switch(toupper(ch)){
            case 'A':
            case 'B':
            case 'C': number='2';
                      break;
            case 'D':
            case 'E':
            case 'F': number='3';
                      break;
            case 'G':
            case 'H':
            case 'I': number='4';
                      break;
            case 'J':
            case 'K':
            case 'L': number='5';
                      break;
            case 'M':
            case 'N':
            case 'O': number='6';
                      break;
            case 'P':
            case 'R':
            case 'S': number='7';
                      break;
            case 'T':
            case 'U':
            case 'V': number='8';
                      break;
            case 'W':
            case 'X':
            case 'Y': number='9';
                      break;
            default:  number=ch;
                      break;
        }
        numericNumber[index]=number;
        index++;
        ch=getchar();
    }
    printf("In numberic form: ");
    for(int i=0;i<15;i++){
        printf("%c", numericNumber[i]);
    }
    printf("\n");
    return 0;
}










