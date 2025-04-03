/*  178-17.c

    Izayaa
    April 2, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 17

    Write a program that prints an n x n magic square
    (a square arrangement of the numbers 1, 2, ..., n^2)
    in which the sums of the rows, columns, and diag-
    onals are all the same). The user will specify the
    value of n:

        This program creates a magic square of a spe-
        cified size. The size must be an odd number
        between 1 and 99.
        Enter size of magic square: 5

            17    24    1    8    15
            23     5    7   14    16
             4     6   13   20    22
            10    12   19   21     3
            11    18   25    2     9

    Store the magic square in a two-dimensional array.
    Start by placing the number 1 in the middle of
    row 0. Place each of the remaining numbers 2, 3,
    ..., n^2 by moving up one row and over one column.
    Any attempt to go outside the bounds of the array
    should "wrap around" to the opposite side of the
    array. For example, instead of storing the next
    number in row -1, we would store it in row n - 1
    (the last row). Instead of storing the next num-
    ber in column n, we would store it in column 0.
    If a particular array element is already occupied,
    put the number directly below the previously
    stored number. If your compiler supports variable
    -length arrays, declare the array to have n rows
    and n columns. If not, declare the array to have
    99 rows and 99 columns.

*/

#include <stdio.h>

int main(void){
    printf("This program create a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    int n, count = 1, i ,j;

    printf("Enter size of magic square: ");
    scanf("%i", &n);

    if(n % 2 == 0){
        printf("That's an even number!\n");
        return 0;
    }

    int square[n][n];
    int nSquared = n * n;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            square[i][j] = 0;
        }
    }

    i = 0; j = n/2;
    while(count <= nSquared){
        if(square[i][j] == 0){
            square[i--][j++] = count++;
        }else{
            if(i == n - 1 && j == 0){
                i = 1; j = n - 1;
            }else{
                i += 2;
                j--;
            }
            square[i--][j++] = count++;
        }
        if(i < 0){
            i = n - 1;
        }
        if(j == n){
            j = 0;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%5i", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}