/*  122-11.c

    Izayaa
    November XX, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 6, Programming Project 11

    The value of the mathematical constant e can be
    expressed as an infinite series:

    e = 1 + 1/1! + 1/2! + 1/3! + ...

    Write a program that approximates e by computing
    the value of

    1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

    where n is an integer entered by the user.

*/

#include <stdio.h>

int main(void) {
    double n;
    double eInitial = 1.0f;

    printf("Enter a value for n: ");
    scanf("%lf", &n);

    for(double i = 1.0f; i <= n; i++) {
        double fact = 1.0f;
        for(double j = 1.0f; j <= i; j++) {
            fact *= j;
        }
        eInitial += (1.0f / fact);
    }

    printf("The approximation of e with n = %.0lf is: %.15f",n , eInitial);

    return 0;
}
