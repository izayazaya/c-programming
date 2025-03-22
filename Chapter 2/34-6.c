/*  34-6.c

    Izayaa
    August 2X, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 2. Programming Project 6

    Modify the program of Programming Project 5 so that the
    polynomial is evaluated using the following formula:

    ((((3x + 2)x - 5)x - 1 )x + 7)x - 6

*/

#include <stdio.h>

int main(void) {
    int x, product;

    printf("Enter a value for \"x\": ");
    scanf("%d", &x);

    product = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The result of the polynomial with the x = %d is %d", x, product);

    return 0;
}