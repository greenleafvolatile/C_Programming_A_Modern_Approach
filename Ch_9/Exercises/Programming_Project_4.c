/* "Modify Programming Project 16 from Chapter 8 so that it includes the following functions:

   void read-word(int counts[26]):
   bool equal_array(int counts1[26], int counts2[26]);

   main will call read_word twice, once for each of the two words entered by the user As it
   reads a word, read_word will use the letters in the word to update the counts array, as
   described in the original project. (main will declare two arrays, one for each word. These
   arrays are used to track how many times each letters occurs in the words.) main will then
   call equals_array, passing it the two arrays. equal_array will return true if the elements
   in the two arrays are identical (indicating that the words are anagrams) and false otherwise." */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define NUMBER_OF_LETTERS_IN_ALPHABET 26

void
read_word(int counts[NUMBER_OF_LETTERS_IN_ALPHABET]);

bool
equal_array(int counts1[NUMBER_OF_LETTERS_IN_ALPHABET], int counts2[NUMBER_OF_LETTERS_IN_ALPHABET]);

void
printArray(int array[26]);

int
main(void){
    int counts1[NUMBER_OF_LETTERS_IN_ALPHABET]={0}, counts2[NUMBER_OF_LETTERS_IN_ALPHABET]={0};
    printf("Enter first word: ");
    read_word(counts1);

    printf("Enter second word: ");
    read_word(counts2);

    if(equal_array(counts1, counts2))
        printf("The words are anagrams");
    else
        printf("The words are not anagrams");
    return 0;
}

void
read_word(int counts[26]){

    int ch=tolower(getchar());
    while(ch!='\n' && ch!=EOF){
        if(isalpha(ch)){
            counts[ch-'a']++;
        }
        ch=getchar();
    }
    printArray(counts);
}

bool
equal_array(int counts1[NUMBER_OF_LETTERS_IN_ALPHABET], int counts2[NUMBER_OF_LETTERS_IN_ALPHABET]){

    for(int i=0;i<NUMBER_OF_LETTERS_IN_ALPHABET;i++){
        if(counts1[i]!=counts2[i]){
            return false;
        }
    }
    return true;
}

void
printArray(int array[26]){
    for(int i=0;i<26;i++){
        printf(" %d", array[i]);
    }
    printf("\n");
}



        

