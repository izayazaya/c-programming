/*  216-3.c

    Izayaa
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 9, Programming Project 3

    Modify Programming Project 9 from Chapter 8 so
    that it includes the following functions:

        void generate_random_walk(char walk[10][10]);
        void print_array(char walk[10][10]);

    main first calls generate_random_walk, which
    initializes the array to contain '.' characters
    and then replaces some of these characters by the
    letters A through Z, as described in the original
    project, main then calls print_array to display
    the array on the screen.

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#define SIZE 10

void generate_random_walk(char walk[10][10]);

void print_array(char walk[10][10]);

int main(void){
    char walk[SIZE][SIZE];

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[10][10]){
    char foot = 'A';
    _Bool walkedOn[SIZE][SIZE] = {false};
    int direction, i, j;

    srand((unsigned) time(NULL));

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            walk[i][j] = '.';
        }
    }

    i = 0, j = 0;
    walk[i][j] = foot++;
    walkedOn[i][j] = true;

    while(foot <= ('Z')){
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

        walk[i][j] = foot++;
        walkedOn[i][j] = true;
    }
}

void print_array(char walk[10][10]){
    for(int k = 0; k < SIZE; k++){
        for(int l = 0; l < SIZE; l++){
            printf("%c ", walk[k][l]);
        }
        printf("\n");
    }
}