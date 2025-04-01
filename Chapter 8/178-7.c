/*  178-7.c

    Izayaa
    March 31, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 7

    Write a program that reads a 5 x 5 array of inte-
    gers and then prints the row sums and the column
    sums:

        Enter row 1: 8 3 9 0 10
        Enter row 2: 3 5 17 1 1
        Enter row 3: 2 8 6 23 1
        Enter row 4: 15 7 3 2 9
        Enter row 5: 6 14 2 6 0

        Row totals: 30 27 40 36 28
        Column totals: 34 37 37 32 21

*/

#include <stdio.h>

#define SIZE 5

int main(void){
    int matrix[SIZE][SIZE], rowTotalIndiv = 0, columnTotalIndiv = 0, i, j;
    int rowTotal[SIZE], columnTotal[SIZE];

    for(i = 0; i < SIZE; i++){
        printf("Enter row %i: ", i + 1);
        for(j = 0; j < SIZE; j++){
            scanf("%i", &matrix[i][j]);
        }
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            rowTotalIndiv += matrix[i][j];
            columnTotalIndiv += matrix[j][i];
        }
        rowTotal[i] = rowTotalIndiv;
        columnTotal[i] = columnTotalIndiv;
        rowTotalIndiv = 0;
        columnTotalIndiv = 0;
    }

    printf("Row totals: ");
    for(i = 0; i < SIZE; i++){
        printf("%i ", rowTotal[i]);
    }

    printf("\n");
    printf("Column totals: ");
    for(i = 0; i < SIZE; i++){
        printf("%i ", columnTotal[i]);
    }

    return 0;
}