/*  34-4.c

    Izayaa
    August 2X, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 2. Programming Project 4

    Write a program that asks the user to enter a dollars-and-cents
    amount, then displays the amount with a 5% tax added:

    Enter an amount: 100
    With tax added: $105.00

*/

#include <stdio.h>

int main(void) {
    float initial;
    float tax = 0.05f;
    float final;

    printf("Enter an amount: ");
    scanf("%f", &initial);

    final = initial + (tax * initial);

    printf("With tax added: $%.2f", final);

    return 0;
}