/*  95-6.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 6

	Modify the upc.c program of Section 4.1 so that it checks
	whether a UPC is valid. After the user enters a UPC, the
	program will display either VALID or NOT VALID.

*/

#include <stdio.h>

int main(void) {
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, total;

	printf("Enter the 12 digit UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve);

	total = (9 - ((((3 * (one + three + five + seven + nine + eleven)) + (two + four + six + eight + ten)) - 1) % 10));

	if (total == twelve) {
		printf("VALID UPC");
	} else
		printf("INVALID UPC");

	return 0;
}