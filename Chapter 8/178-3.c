/*  178-3.c

    Izayaa
    March 24, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 3

    Modify the repdigit.c program of Section 8.1 so
    that the user can enter more than one number to be
    tested for repeated digits. The program should
    terminate when the user enters a number that's less
    than or equal to 0.

*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int repeated_digit[10] = {0};
    int digit;
    long n;

    while(1){
        printf("\nEnter a number: ");
        scanf("%ld", &n);
        if(n <= 0){
            break;
        }

        while(n > 0){
            digit = n % 10;
            repeated_digit[digit]++;
            n /= 10;
        }

        printf("Digit:\t\t0  1  2  3  4  5  6  7  8  9\n");
        printf("Occurrences: \t");
        for(int i = 0; i < 10; i++){
            printf("%i  ", repeated_digit[i]);
        }
        for(int i = 0; i < 10; i++){
            repeated_digit[i] = 0;
        }
    }

    return 0;
}