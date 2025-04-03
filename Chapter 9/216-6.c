/*  216-6.c

    Izayaa
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 9, Programming Project 6

    Write a function that computes the value of the
    following polynomial:

        3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

    Write a program that asks the user to enter a
    value for x, calls the function to compute the
    value of the polynomial, and then displays the
    value returned by the function.

*/

#include <stdio.h>

int polynomial(int);

int main(void){
    int x;

    printf("Enter a value for x: ");
    scanf("%i", &x);
    printf("%i\n", polynomial(x));

    return 0;
}

int polynomial(int x){

    return ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x))
        - (5 * (x * x * x)) - (x * x) - (7 * x) - 6);
}