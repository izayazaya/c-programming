/*  216-5.c

    Izayaa
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 9, Programming Project 5

    Modify Programming Project 17 from Chapter 8 so
    that it includes the following functions:

        void create_magic_square(int n, char magic
        _square[n][n]);
        void print_magic_square(int n, char magic
        _square[n][n]);

    After obtaining the number n from the user, main
    will call create_magic_square. passing it an n x n
    array that is declared inside main. create_magic_
    square will fill the array with the numbers 1, 2,
    ..., n^2 as described in the original project.
    main will then call print_magic_square, which will
    display the array in the format described in the
    original project. Note: If your compiler doesn't
    support variable-length arrays, declare the array
    in main to be 99 x 99 instead of n x n and use the
    following prototypes instead:

        void create_magic_square(int n, char magic
        _square[99][99]);
        void print_magic_square(int n, char magic
        _square[99][99]);

*/

#include <stdio.h>

void create_magic_square(int n, int [n][n]);

void print_magic_square(int n, int [n][n]);

int main(void){
    printf("This program create a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    int n;

    printf("Enter size of magic square: ");
    scanf("%i", &n);

    if(n % 2 == 0){
        printf("That's an even number!\n");
        return 0;
    }

    int magic_square[n][n];

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, int magic_square[n][n]){
    int count = 1, i ,j;
    int nSquared = n * n;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            magic_square[i][j] = 0;
        }
    }

    i = 0; j = n/2;
    while(count <= nSquared){
        if(magic_square[i][j] == 0){
            magic_square[i--][j++] = count++;
        }else{
            if(i == n - 1 && j == 0){
                i = 1; j = n - 1;
            }else{
                i += 2;
                j--;
            }
            magic_square[i--][j++] = count++;
        }
        if(i < 0){
            i = n - 1;
        }
        if(j == n){
            j = 0;
        }
    }
}

void print_magic_square(int n, int magic_square[n][n]){
    int i ,j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%5i", magic_square[i][j]);
        }
        printf("\n");
    }
}