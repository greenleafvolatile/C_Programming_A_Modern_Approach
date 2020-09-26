/* "One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Caesar. It involves replacing each
   letter in a message with another letter that is a fixed number of positions later in the alphabet. (If the replacement would go
   past the letter Z, the cipher "wraps around" to the beginning of the alphabet. [...] Write a program that encrypts a message using
   a Caesar-cipher. The user will enter the message to be encrypted and the shift amount. You may assume that the message does not exceed
   80 characters. Characters other than letters should be left unchanged. Lower-case letters remain lower-case when encrypted, and
   upper-case letters remain upper-case."*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_MESSAGE_SIZE 80

int main(void){
    int actualArrayLength=0;
    int ch=0;
    int shiftAmount=0;
    char unencryptedMessage[MAX_MESSAGE_SIZE]={0};
    char encryptedMessage[MAX_MESSAGE_SIZE]={0};

    printf("Enter message to be encrypted: ");
    ch=getchar();   
    while(ch!='\n' && ch!=EOF && ch!='\0'){
        unencryptedMessage[actualArrayLength]=ch;
        actualArrayLength++;
        ch=getchar();
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmount);
    
    for(int i=0;i<actualArrayLength;i++){
        
        char unencryptedChar=unencryptedMessage[i];
        char encryptedChar;

        // If it is a letter we encrypt it.
        if(isalpha(unencryptedChar)){
            // Allow for the different ASCII values of capitalized and non-capitalized letters. 
            if(islower(unencryptedChar)){
            encryptedChar=unencryptedChar+shiftAmount>'z'?96+(abs('z'-(unencryptedChar+shiftAmount))):unencryptedChar+shiftAmount;
            }
            else{
                encryptedChar=unencryptedChar+shiftAmount>'Z'?64+(abs('Z'-(unencryptedChar+shiftAmount))):unencryptedChar+shiftAmount;
            }
        }
        else{
            encryptedChar=unencryptedChar;
        }
        encryptedMessage[i]=encryptedChar;
    }

    for(int i=0;i<actualArrayLength;i++){
        printf("%c", encryptedMessage[i]);
    }
    return 0;
}

                
        



