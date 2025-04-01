/*  178-9.c

    Izayaa
    March 31, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 9

    Write a program that generates a "random walk"
    across a 10x10 array. The array will contain
    characters (all '.' initially). The program must
    randomly "walk" from element to element, always
    going up, down, left, or right by one element.
    The elements visited by the program will be 
    labeled with the letters A through Z, in the 
    order visited. Here's an example of the desired
    output:

        A . . . . . . . . .
        B C D . . . . . . .
        . F E . . . . . . .
        H G . . . . . . . .
        I . . . . . . . . .
        J . . . . . . . Z .
        K . . R S T U V Y .
        L M P Q . . . W X .
        . N O . . . . . . .
        . . . . . . . . . .

    Hint: Use the srand and rand functions (see deal.c)
    to generate random numbers. After generating a 
    number, look at its remainder when divided by 4.
    There are four possible values for the remainder--
    0, 1, 2, and 3--indicating the direction of the next
    move. Before performing a movem check that (a) it
    won't go outside the array, and (b) it doesn't take
    us to an element that already has a letter assigned.
    If either condition is violated, try moving in 
    another direction. If all four directions are blocked,
    the program must terminate. Here's an example of pre-
    mature termination:

        A B G H I . . . . .
        . C F . J K . . . .
        . D E . M L . . . .
        . . . . N O . . . .
        . . W X Y P Q . . .
        . . V U T S R . . .
        . . . . . . . . . .
        . . . . . . . . . .
        . . . . . . . . . .
        . . . . . . . . . .

    Y is blocked on all four sides, so there's no place
    to put Z.

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#define SIZE 10

int main(void){
    char square[SIZE][SIZE];
    char foot = 'A';
    _Bool walkedOn[SIZE][SIZE] = {false};
    int direction, i, j;

    srand((unsigned) time(NULL));

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            square[i][j] = '.';
        }
    }

    i = 0, j = 0;
    square[i][j] = foot++;
    walkedOn[i][j] = true;

    while(foot <= ('Z' + 1)){
        for(int k = 0; k < SIZE; k++){
            for(int l = 0; l < SIZE; l++){
                printf("%c ", square[k][l]);
            }
            printf("\n");
        }

        printf("%i %i\n", i, j);

        sleep(1);

        direction = rand() % 4;

        if((walkedOn[i + 1][j] == true) &&
            (walkedOn[i - 1][j] == true) &&
            (walkedOn[i][j + 1] == true) &&
            (walkedOn[i][j - 1] == true)){
            break;
        }else if((walkedOn[i + 1][j] == true) &&
            (walkedOn[i - 1][j] == true) &&
            (walkedOn[i][j + 1] == true) &&
            (j - 1 < 0)){
            break;
        }else if((walkedOn[i + 1][j] == true) &&
            (walkedOn[i - 1][j] == true) &&
            (walkedOn[i][j - 1] == true) &&
            (j + 1 > 9)){
            break;
        }else if((walkedOn[i + 1][j] == true) &&
            (walkedOn[i][j + 1] == true) &&
            (walkedOn[i][j - 1] == true) &&
            (i - 1 < 0)){
            break;
        }else if((walkedOn[i - 1][j] == true) &&
            (walkedOn[i][j + 1] == true) &&
            (walkedOn[i][j - 1] == true) &&
            (i + 1 > 9)){
            break;
        }else if(direction == 0 && (j <= 9 && j >= 0)){
            j++;
            if((j < 0 || j > 9) || walkedOn[i][j] == true){
                j--;
                continue;
            }
        }else if(direction == 1 && (i <= 9 && i >= 0)){
            i++;
            if((i < 0 || i > 9) || walkedOn[i][j] == true){
                i--;
                continue;
            }
        }else if(direction == 2 && (j <= 9 && j >= 0)){
            j--;
            if((j < 0 || j > 9) || walkedOn[i][j] == true){
                j++;
                continue;
            }
        }else if(direction == 3 && (i <= 9 && i >= 0)){
            i--;
            if((i < 0 || i > 9) || walkedOn[i][j] == true){
                i++;
                continue;
            }
        }

        square[i][j] = foot++;
        walkedOn[i][j] = true;
    }

    return 0;
}