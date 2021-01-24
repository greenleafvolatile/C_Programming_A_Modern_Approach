/* "Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence" */

#include <stdio.h>

int main(void){

    char ch;
    int vowelCount;
    
    printf("Enter a sentence: ");
    while((ch=getchar())!='\n'){
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': vowelCount++; break;
            default : ;//if not a vowel, do nothing
        }
    }
    printf("You sentence contains %d vowels.\n", vowelCount);
    return 0;
}


        
