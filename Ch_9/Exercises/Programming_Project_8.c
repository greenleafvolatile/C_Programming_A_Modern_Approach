/* "Write a program that simulates the game of craps, which is played with two dice. On the
   first roll, the player wins if the sum of the dice is 7 or 11. The player loses if the sum is 2, 3, 
   or 12. Any other roll is called the "point" and the game continues. On each subsequent roll, 
   the player wins if he or she rolls the point again. The player loses by rolling 7. Any other roll
   is ignored and the game continues. At the end of each game, the program will ask the user 
   whether or not to play again. When the user enters a response other than y or Y, the program 
   will display the number of  wins and losses and then terminate." */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int
rollDice(void);

bool
playGame(void);

int
main(void){

    int wins = 0, losses = 0;
    char ch;
    srand(time(0));

    do {

        if(playGame()) {
            printf("You win!\n");
            printf("\n");
            wins++;
        }
        else {
            printf("You lose!\n");
            printf("\n");
            losses++;
        }

        printf("Play again? ");
        scanf(" %c", &ch);
        printf("\n");

    }while(tolower(ch) == 'y');

    printf("Wins: %d  Losses: %d\n", wins, losses);
}

bool
playGame(void) {
    
    bool isPoint = false;
    bool done = false;
    int roll = 0, point = 0;

    while(!done) {
        roll=rollDice();
        printf("You rolled: %d\n", roll);
        if(!isPoint && (roll == 7 || roll == 11)) {
            return true;
        }
        else if(!isPoint && (roll == 2 || roll == 3 || roll == 12)) {
            done = !done;
        }
        else if(!isPoint){
            isPoint = !isPoint;
            point = roll;
            printf("Your point is %d\n", point);
            continue;
        }

        if(isPoint && point == roll){
            return true;
        }
        else if(isPoint && roll == 7) {
            done = !done;
        }
    }
    return false;
}

int
rollDice(void) {
    int firstDice = (rand() % 6) + 1;
    int secondDice = (rand() % 6) + 1;
    return firstDice + secondDice;
}


    
