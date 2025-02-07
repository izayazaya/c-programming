/*  34-5.c

    Izayaa
    August 2X, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 2. Programming Project 5

    Write a program that asks the user to enter a value for x
    and then displays the value for the following polynomial:

    3x^5 + 2x^4 - 5x^3 -x^2 + 7x - 6

    Hint: C doesn't have an exponentiation operator, so you'll
    need to multiply x by itself repeatedly in order to compute
    the powers of x. (For example, x * x * x is x cubed.)

*/

#include <stdio.h>

int main(void) {
    int x, product;

    printf("Enter a value for \"x\": ");
    scanf("%d", &x);

    product = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;

    printf("The result of the polynomial with the x = %d is %d", x, product);

    return 0;
}