// Chess inside a terminal using C

#include <stdio.h>
#define ROW 8
#define COLUMN 8

void drawBoard();

int move(int, int);

int eaten(int, int);

int pawn();

int rook();

int knight();

int bishop();

int queen();

int king();

int main(void){
    int row, column;

    drawBoard();
}

void drawBoard(){
    int board[ROW][COLUMN] = {{0}, {0}};
    for(int i = 0; i < ROW; i++){
        printf("—————————————————————————————————\n");
        for(int j = 0; j <= COLUMN; j++){
            printf("|   ");
        }
        printf("\n");
    }
    printf("—————————————————————————————————\n");

}