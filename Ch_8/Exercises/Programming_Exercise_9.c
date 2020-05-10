/* "Write a program that generates a 'random walk' across a 10x10 array. The array will contain characters (all '.' initially). The program must
   randomly "walk" from element to element, always going up, down, left or right by one element. The elements visited by the program will be labeled
   with the letters A through Z, in order visited."*/

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

int main(void){
    int direction, array=0, element=0;
    char grid[ARRAYS][ELEMENTS];
    bool directionsExplored[NR_OF_DIRECTIONS]={false};
    
    // Generate seed for rand() from system time
    srand(time(0));
    
    // Initialize the array with '.'
    for(int i=0;i<ARRAYS;i++){
        for(int j=0;j<ELEMENTS;j++){
            grid[i][j]='.';
        }
    }

    // Starting position of the 'walk' is the element at location [0][0] which is assigned 'A'
    char letter='A';
    grid[array][element]=letter;

    while(grid[array][element]!='Z'){

        // Pick a random direction
        direction=rand()%4;

        // Check if there are possible moves.
        if(directionsExplored[DOWN] && directionsExplored[UP] && directionsExplored[RIGHT] && directionsExplored[LEFT]){
            printf("Terminated due to no more possible moves!\n");
            break;
        }
        
        if(direction==DOWN){
            if(!directionsExplored[DOWN]){
                //If a move south was not explored, check if move south is within grid and would move to empty grid. 
                if(array < ARRAYS - 1 && grid[array+1][element]==EMPTY){
                    //move to adjacent cell to the south.
                    array++;
                }
                //If move is to cell outside of grid or to cell that is not empty, set explored to TRUE and continue to next random move.
                else{
                    directionsExplored[DOWN]=!directionsExplored[DOWN];
                    continue;
                }
            }
            else if(directionsExplored[DOWN]){
                continue;
            }
        }

        else if(direction==UP){
            if(!directionsExplored[UP]){
                if(array > 0 && grid[array-1][element]==EMPTY){
                    array--;
                }
                else{
                    directionsExplored[UP]=!directionsExplored[UP];
                    continue;
                }
            }
            else if(directionsExplored[UP]){
                continue;
            }
        }

        else if(direction==RIGHT){
            if(!directionsExplored[RIGHT]){
                if(element < ELEMENTS - 1 && grid[array][element+1]==EMPTY){
                   element++;
               }
               else{
                   directionsExplored[RIGHT]=!directionsExplored[RIGHT];
                   continue;
               }
            }
            else if(directionsExplored[RIGHT]){
                continue;
            }
        }

        else if(direction==LEFT){
            if(!directionsExplored[LEFT]){
                if(element > 0 && grid[array][element-1]==EMPTY){
                   element--;
               }
               else{
                   directionsExplored[LEFT]=!directionsExplored[LEFT];
                   continue;
               }
            }
            else if(directionsExplored[LEFT]){
                continue;
            }
        }
        letter++;
        grid[array][element]=letter;

        //Moved to new cel. All moves are feasible again so reset directionsExplored array.
        for(int i=0;i<NR_OF_DIRECTIONS; directionsExplored[i]=false, i++);
    }
    
    // Print the array to stdout
    for(int i=0;i<ARRAYS;i++){
        for(int j=0;j<ELEMENTS;j++){
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}





