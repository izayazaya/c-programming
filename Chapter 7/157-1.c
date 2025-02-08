/*  157-1.c

    Izayaa
    February 8, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 1

    The square2.c program of Section 6.3 will fail (usually
    by printing strange answers) if i * i exceeds the maximum
    int value. Run the program and determine the smallest
    value of n that causes failure. Try changing the type of
    i to short and running the program again. (Don't forget
    to update the conversion specifications in the call of
    printf!) Then try long. From these experiments, what
    can you conclude about the number of bits used to store
    integer types on your machine?

*/

#include <stdio.h>

int main(void){
    int n;
    long i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%15ld%15ld\n", i, i * i);
    }

    return 0;
}

// The number of bits used to store integer types on my
// machine is higher than that of what the book expects
// it to be, it takes a while for the output to show
// when I start entering n values that are 5 digits or
// more