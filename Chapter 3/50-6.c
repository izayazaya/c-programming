/*  50-6.c

    Izayaa
    August 3X, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 3, Programming Project 6

	Modify the addfrac.c program of section 3.2 so that the
	user enters both fractions at the same time, separated
	by a plus sign:

	   Enter two fractions separated by a plus sign: 5/6+3/4
	   The sum is 38/24

*/

#include <stdio.h>

int main(void) {
	int num1, num2, denom1, denom2, numsum, denomsum;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	numsum = num1 * denom2 + num2 * denom1;
	denomsum = denom1 * denom2;
	printf("The sum is %d/%d", numsum, denomsum);

	return 0;
}