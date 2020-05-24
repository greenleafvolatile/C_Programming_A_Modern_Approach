/* "Write a program that tests whether two words are anagams (permutations of the same letters). Write a loop
   that reads the first word, character by character, using an array of 26 integers to keep track of how many times
   each letter has been seen. Use another loop to read the second word, except this time decrementing the corresponding
   array elements as each letter is read. Both loops should ignore any characters that aren't letters, and both should treat
   upper-case letters in the same way as lower-case letters. After the second word has been read, use a third loop to check whether
   all the elements in the array are zero. If so, the words are anagrams."*/

#include <stdio.h>
#include <ctype.h>

#define NUMBER_OF_LETTERS_IN_ALPHABET 26

int main(void){
    int ch;
    int letterCount[NUMBER_OF_LETTERS_IN_ALPHABET]={0};
    printf("Enter first word: ");
    ch=tolower(getchar());
    while(ch!='\n' && ch!=EOF){
        if(isalpha(ch)){
            letterCount[ch-'a']++;
        }
        ch=getchar();
    }

    printf("Enter second word: ");
    ch=tolower(getchar());
    while(ch!='\n' && ch!=EOF){
        if(isalpha(ch)){
            letterCount[ch-'a']--;
        }
        ch=getchar();
    }

    for(int i=0;i<NUMBER_OF_LETTERS_IN_ALPHABET;i++){
        if(letterCount[i]!=0){
            printf("The words are not anagrams.");
            return 0;
        }
    }
    printf("The words are anagrams.");
    return 0;
}


        

