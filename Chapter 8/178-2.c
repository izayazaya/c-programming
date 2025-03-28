/*  178-2.c

    Izayaa
    March 24, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 2

    Modify the repdigit.c program of Section 8.1 so
    that it prints a table showing how many times
    each digit appears in the number:

        Enter a number: 41271092
        Digit:        0  1  2  3  4  5  6  7  8  9
        Occurrences:  1  2  2  0  1  0  0  1  0  1

*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int repeated_digit[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

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

    return 0;
}