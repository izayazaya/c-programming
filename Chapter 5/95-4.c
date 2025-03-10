/*  95-4.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 4

	Here's a simplified version of the Beaufort scale, which
	is used to estimate wind force:

	Speed (knots)     Description
	-----------------------------
	Less than 1       Calm
	1 - 3             Light air
	4 - 27            Breeze
	28 - 47           Gale
	48 - 63           Storm
	Above 63          Hurricane

	Write a program that asks the user to enter a wind
	speed (in knots), then displays the corresponding
	description.

*/

#include <stdio.h>

int main(void) {
	float knots;

	printf("Enter the wind speed (in knots): ");
	scanf("%f", &knots);

	if (knots < 1) {
		printf("Calm");
	} else if (knots < 4) {
		printf("Light air");
	} else if (knots < 28) {
		printf("Breeze");
	} else if (knots < 48) {
		printf("Gale");
	} else if (knots < 64) {
		printf("Storm");
	} else
		printf("Hurricane");
}