/* "The prototypical Internet newbie is a fellow names B1FF, who has a unique way of writing
   messages. Here's a typical B1FF communique: H3Y DUD3, C 15 R1LLY COOL ! ! ! ! ! ! ! ! !
   Write a "B1FF filter" that reads a message entered by the user and translates it into B1FF speak.
   Your program should convert the message to upper-case letters, substitue digits for certain 
   letters (A->4, B->8, E->3, I->1, O->0, S->5), and then append 10 or so exclamation marks.
   Hint: Store the original message in an array of characters, then go back through the array, 
   translating and printing characters one by one." */

#include<stdio.h>
#include<ctype.h>

int main(void){

    int n=0;
    char ch;
    char message[n];


    printf("Enter message: ");

    scanf("%c", &ch); 
    do{
        message[n]=ch;
        scanf("%c", &ch);
        n++;
    }while(ch!='\n');

    for(int i=0;i<n;i++){
        ch=message[i];
        switch(ch){
            case 'a' : printf("4");
                       break;
            case 'b' : printf("8");
                       break;
            case 'e' : printf("3");
                       break;
            case 'i' : printf("1");
                       break;
            case 'o' : printf("0");
                       break;
            case 's' : printf("5");
                       break;
            default  : printf("%c", toupper(ch));
        }
    }

    printf("! ! ! ! ! ! ! ! ! !\n");
    return 0;
}




            
