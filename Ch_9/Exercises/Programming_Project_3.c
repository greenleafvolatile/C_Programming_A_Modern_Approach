/* "Modify Programming Project 9 from Chapter 8 so that it includes the following functions:

   void generate_random_walk(char walk[10][10]);
   void print_array(char_walk[10][10]);

   Main first calls generate_random_walk, which initializes the array to contain '.'
   characters and then replaces some of these characters by the letters A through Z, as
   described in the original project, main then calls print_arra to display the array on
   the screen." */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ARRAYS 10
#define ELEMENTS 10
#define EMPTY '.'
#define NR_OF_DIRECTIONS 4
#define UP 1
#define DOWN 0
#define LEFT 3
#define RIGHT 2


void generate_random_walk(char walk[ARRAYS][ELEMENTS]);
void print_array(char walk[ARRAYS][ELEMENTS]);
void checkForPossibleMoves();

int main(void){
    int direction, array=0, element=0;
    char walk[ARRAYS][ELEMENTS];
    bool directionsExplored[NR_OF_DIRECTIONS]={false};
    
    generate_random_walk(walk);

    // Starting position of the 'walk' is the element at location [0][0] which is assigned 'A'
    char letter='A';
    walk[array][element]=letter;

    while(walk[array][element]!='Z'){

        // Pick a random direction
        direction=rand() % NR_OF_DIRECTIONS;

        if(direction==DOWN){
            if(!directionsExplored[DOWN]){
                //If a move south was not explored, check if move south is within walk and would move to empty cell. 
                if(array < ARRAYS - 1 && walk[array+1][element]==EMPTY){
                    //move to adjacent cell to the south.
                    array++;
                }
                //If move is to cell outside of walk or to cell that is not empty, set explored to TRUE, check if there still
                //possible moves and, if so, generate next random move.
                else{
                    directionsExplored[DOWN]=!directionsExplored[DOWN];
                    checkForPossibleMoves(directionsExplored, walk);
                    continue;
                }
            }
            else if(directionsExplored[DOWN]){
                continue;

            }
        }

        else if(direction==UP){
            if(!directionsExplored[UP]){
                if(array > 0 && walk[array-1][element]==EMPTY){
                    array--;
                }
                else{
                    directionsExplored[UP]=!directionsExplored[UP];
                    checkForPossibleMoves(directionsExplored, walk);
                    continue;
                }
            }
            else if(directionsExplored[UP]){
                continue;
            }
        }

        else if(direction==RIGHT){
            if(!directionsExplored[RIGHT]){
                if(element < ELEMENTS - 1 && walk[array][element+1]==EMPTY){
                   element++;
               }
               else{
                   directionsExplored[RIGHT]=!directionsExplored[RIGHT];
                   checkForPossibleMoves(directionsExplored, walk);
                   continue;
               }
            }
            else if(directionsExplored[RIGHT]){
                continue;
            }
        }

        else if(direction==LEFT){
            if(!directionsExplored[LEFT]){
                if(element > 0 && walk[array][element-1]==EMPTY){
                   element--;
               }
               else{
                   directionsExplored[LEFT]=!directionsExplored[LEFT];
                   checkForPossibleMoves(directionsExplored, walk);
                   continue;
               }
            }
            else if(directionsExplored[LEFT]){
                continue;
            }
        }
        letter++;
        walk[array][element]=letter;

        //Moved to new cel. All moves are feasible again so reset directionsExplored array.
        for(int i=0;i<NR_OF_DIRECTIONS; directionsExplored[i]=false, i++);
    }

    print_array(walk);
    
    return 0;
}

//Checks if there are unexplored moves.
void checkForPossibleMoves(bool directionsExplored[], char walk[][ELEMENTS]){
    
        if(directionsExplored[DOWN] && directionsExplored[UP] && directionsExplored[RIGHT] && directionsExplored[LEFT]){
            print_array(walk);
            printf("Terminated due to no more possible moves!\n");
            exit(0);
        }
        else{
            return;
        }
}

//Prints the walk to stdout.
void print_array(char walk[][ELEMENTS]){

    for(int i=0;i<ARRAYS;i++){
        for(int j=0;j<ELEMENTS;j++){
            printf("%c", walk[i][j]);
        }
        printf("\n");
    }
}

void generate_random_walk(char walk[ARRAYS][ELEMENTS]){

    // Generate seed for rand() from system time
    srand(time(0));
    
    // Initialize the array with '.'
    for(int i=0;i<ARRAYS;i++){
        for(int j=0;j<ELEMENTS;j++){
            walk[i][j]='.';
        }
    }
}





