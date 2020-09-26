/* "Write a program that reverses the words in a sentence. Use a loop to read the characters one by one and store them in a 
   one-dimensional char array. Have the loop stop at a period, question mark, or exclamation point (the "terminating character"),
   which is saved in a separate char variable. Then use a second loop to search backward through the array for the beginning of the last word.
   Print the last word, then search backward for the next-to-last word. Repeat until the beginning of the array is reached.
   Finally, print the terminating character."*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 50

int main(void){
    int actualLength=0;
    int newLength;
    char sentence[SIZE];
    char terminatingCharacter;
    int ch;
    printf("Enter a sentence: ");
    ch=getchar();
    while(!ispunct(ch) && (ch!=EOF) && actualLength<SIZE){
        sentence[actualLength]=ch;
        actualLength++;
        ch=getchar();
    }

    terminatingCharacter=ch;
    newLength=actualLength;
    
    // Word length is either 1) from  index that has a ' ' (not inclusive, so + 1) up to new length,   2) from the beginning of the array up to new length. 
    // Because index + 1 has to be the beginning of the first word in the array, we have to iterate backwards to -1.
    for(int i=actualLength-1;i>=-1;i--){

        if(sentence[i]==' ' || i==-1){

            for(int j=i + 1; j < newLength; j++){
                printf("%c", sentence[j]);
            }
            newLength=i;

            // Print a space after a word, unless it is the last word in the sentence (the first word in the array).
            if(i!=-1)printf(" "); 
        }

    }
    printf("%c", terminatingCharacter);
    return 0;
}






