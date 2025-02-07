/*  122-3.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 6, Programming Project 3

	Write a program that asks the user to enter a fraction,
	then reduces the fraction to lowest terms:

	   Enter a fraction: 6/12
	   In lowest terms: 1/2

	Hint: To reduce a fraction to lowest terms, first compute
	the GCD of the numerator and denominator. Then divide both
	the numerator and denominator by the GCD.

*/

#include <stdio.h>

int main(void) {
	int numerator, denominator, a, b, lowestNum, lowestdenom, remainder;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);
	a = numerator, b = denominator;

	while (b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;
	}

	lowestNum = numerator / a;
	lowestdenom = denominator / a;

	printf("In lowest terms: %d/%d", lowestNum, lowestdenom);

	return 0;
}