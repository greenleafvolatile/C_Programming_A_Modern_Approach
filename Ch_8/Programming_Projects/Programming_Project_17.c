/* "Write a program that prints an n x n magic square (a square arrangement of the numbers 1, 2, ...n squared in which the sums of the rows,
   columns, and diagonals are all the same). The user will specify the value of n. Store the magic square in a two-dimensional array.
   Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3 , ... n squared by moving up one row
   and over one column. Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array.
   If a particular array element is already occupied, put the number directly below the previously stored number. 
   If your compiler supports variable length arrays, declare the array to have n rows and n columns. If not, declare the array to have 99 rows and 99 columns."*/

#include <stdio.h>


int main(void){
    int squareSize, column, row=0, count=1;
    int magicSquare[99][99];

    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
    scanf("%d", &squareSize);
;
    column=squareSize/2;

    magicSquare[row][column]=count++;

    while(count<=squareSize*squareSize){
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
        // If the cell is already occupied by non-zero number, put the number in the cell in the next row.
        if(magicSquare[row][column]!=0){
            if(row<squareSize-1){

                row++;
            }
            else{
                row=0;
            }
        }
        magicSquare[row][column]=count++;
    }

    // Print the magic square.
    for(int i=0;i<squareSize;i++){
        for(int j=0;j<squareSize;j++){
            printf("%4d", magicSquare[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    
