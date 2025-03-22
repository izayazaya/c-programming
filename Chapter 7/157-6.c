/*  157-6.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 6

    Write a program that prints the values of sizeof(int),
    sizeof(short), sizeof(long), sizeof(float), sizeof(double)
    and sizeof(long double).

*/

#include <stdio.h>

int main(void){
    int a;
    short b;
    long c;
    float d;
    double e;
    long double f;

    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(b));
    printf("%ld\n", sizeof(c));
    printf("%ld\n", sizeof(d));
    printf("%ld\n", sizeof(e));
    printf("%ld\n", sizeof(f));

    return 0;
}