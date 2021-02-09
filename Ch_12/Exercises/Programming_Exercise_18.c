/*************************************************************************************
  * "Write the evaluate_position function described in Exercise 13 of Chapter 9. Use *
  * pointer arithmetic--not subscripting--to visit array elements. Use a single loop *
  * instead of nested loops."                                                        *
  ************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Macro's
#define ROWS 8
#define COLUMNS 8

// Prototypes

int
getPieceValue(char);

int
evaluate_position(char board[ROWS][COLUMNS]);

int
main(void) {

    char board[][COLUMNS] = { {'\0', '\0', '\0', 'Q', '\0', 'B', '\0', 'R'},
                   {'\0', 'B', '\0', 'P', 'P', 'P', 'P', 'P'},
                   {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
                   {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
                   {'\0', 'r', '\0', '\0', '\0', '\0', '\0', '\0'},
                   {'\0', 'b', '\0', 'p', '\0', '\0', 'p', 'p'},
                   {'\0', '\0', '\0', 'q', '\0', 'b', '\0', 'r'} };

    printf("%s has the advantage!", evaluate_position(board) > 0 ? "White" : "Black");
    
    return(EXIT_SUCCESS);
}

int
evaluate_position(char board[][COLUMNS]) {

    int sum_black_pieces = 0;
    int sum_white_pieces = 0;
    char *p; 

    for(p = board[0]; p < board[0] + ROWS * COLUMNS; p++) {
        char piece = *p;
        int pieceValue = getPieceValue(piece);

        if (isupper(piece)) sum_white_pieces += pieceValue;
        else sum_black_pieces += pieceValue;

    }
    
    return sum_white_pieces - sum_black_pieces;

}

int getPieceValue(char chessPiece) {

    int value = 0;

    chessPiece = tolower(chessPiece);

    switch(chessPiece) {
        case 'q' : value = 9;
                   break;
        case 'r' : value = 5;
                   break;
        case 'b' : 
        case 'n' : value = 3;
                   break;
        case 'p' : value = 1;
                   break;
    }

    return value;
}

