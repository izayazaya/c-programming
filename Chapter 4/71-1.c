/*  71-1.c

    Izayaa
    September XX, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 4, Programming Project 1

    Write a program that asks the user to enter a two-digit number,
    then prints the number with its digits reversed. A session with
    the program should have the following appearance:

       Enter a two-digit number: 28
       The reversal is: 82

    Read the number using %d, then break it into two digits.
    Hint: If n is an integer, then n % 10 is the last digit in n
    and n / 10 is n with the last digit removed.

*/

#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    printf("The reversal is: %d%d", number % 10 ,number / 10);

    return 0;
}