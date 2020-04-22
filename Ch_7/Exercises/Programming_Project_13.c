#include <stdio.h>

int main(void){
    
    char ch;
    float wordCount=0.0f, characterCount=0.0f;

    printf("Enter a sentence: ");

    while((ch=getchar())!='\n'){
        if(ch!=' '){
            characterCount++;
        }
        else{
            wordCount++;
        }
    }
    wordCount++; // Increment once for the final word.
    printf("Average word length: %.1f", characterCount/wordCount);
    return 0;
}




