/*  71-5.c

    Izayaa
    September XX, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 4, Programming Project 5

    Rewrite the upc.c program of Section 4.1 so that the user enters
    11 digits at one time, instead of entering one digit, then five
    digits, and then another five digits.

       Enter the first 11 digits of a UPC: 01380015173
       Check digit: 5

*/

#include <stdio.h>

int main(void) {
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven);

    twelve = (9 - (((3 * (one + three + five + seven + nine + eleven)) + (two + four + six + eight + ten) - 1) % 10));
    printf("Check digit: %d\n", twelve);

    return 0;
}