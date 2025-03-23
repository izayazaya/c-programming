/*  178-1.c

    Izayaa
    March 24, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 1

    Modify the repdigit.c program of Section 8.1 so
    that it shows which digits (if any) were repeated:

        Enter a number: 939577
        Repeated digit(s): 7 9

*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool digit_seen[10] = {false};
    int repeated_digit[10];
    int digit, j = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            repeated_digit[j++] = digit;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for(int i = 0; i < j; i++){
        printf("%i ", repeated_digit[i]);
    }

    return 0;
}