/* "Modify Programming Project 17 from chapter 8 so that it includes the following functions:

   void createMagicSquare(int n, char magic_square[n][n]);
   void printMagicSquare(int n, char magic_square[n][n]);

   After obtaining the number n from the user, main will call createMagicSquare,
   passing it an n x n array that is declared inside main. createMagicSquare will fill
   the array with the numbers 1, 2, ...n squared as described in the original project. main will then
   call printMagicSquare, which will display the array in the format describd in the 
   original project." */

#include <stdio.h>


void
createMagicSquare(int n, int magic_square[n][n]);

void
printMagicSquare(int n, int magic_square[n][n]);

int
main(void){
    int squareSize;

    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
    scanf("%d", &squareSize);

    while(squareSize%2==0){
        printf("Size must be an odd number between 1 and 99.\nEnter size of magic square: ");
        scanf("%d", &squareSize);
    }

    int magicSquare[squareSize][squareSize];
    
    for(int i=0;i<squareSize;i++){
        for(int j=0;j<squareSize;j++){
            magicSquare[i][j]=0;
        }
    }
    
    createMagicSquare(squareSize, magicSquare);

    printMagicSquare(squareSize, magicSquare);
    
    return 0;
}

void
createMagicSquare(int squareSize, int magicSquare[squareSize][squareSize]){
    int column=squareSize/2;
    int row=0;
    int count=1;

    magicSquare[row][column]=count++;

    while(count<=squareSize*squareSize){
        int previousRow=row;
        int previousColumn=column;

        // Move up one row and over one column.      
        row--;
        column++;

        // If moving up one row puts the number outside the bounds of the array, put the number in the last row.
        if(row<0){
            row=squareSize-1;
        }

        // If moving over one column puts the number outside the bounds of the array, out the number in the first column.
        if(column>squareSize-1){
            column=0;
        }

        // If the cell is already occupied by non-zero number, put the number beneath the previously stored number.
        if(magicSquare[row][column]!=0){

            row=previousRow;
            column=previousColumn;

            if(row<squareSize-1){

                row++;
            }
            else{
                row=0;
            }
        }
        magicSquare[row][column]=count++;
    }
}
    

void
printMagicSquare(int squareSize, int magic_square[squareSize][squareSize]){

    for(int i=0;i<squareSize;i++){
        for(int j=0;j<squareSize;j++){
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }
}


    
