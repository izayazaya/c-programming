/*  71-3.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 4, Programming Project 3

	Rewrite the program in Programming Project 2 so that it
	prints the reversal of a three-digit number without using
	arithmetic to split the number into digits. Hint: See the
	upc.c program of Section 4.1

*/

#include <stdio.h>

int main(void) {
	int first, second, third;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &first, &second, &third);

	printf("The reversal is: %d%d%d", third, second, first);

	return 0;
}