/*  95-9.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 9

	Write a program that prompts the user to enter two
	dates and the indicates which date comes earlier
	on the calendar:

	   Enter first date (mm/dd/yy): 3/6/08
	   Enter second date (mm/dd/yy): 5/17/07
	   5/17/07 is earlier than 3/6/08

*/

#include <stdio.h>

int main(void) {
	int fmm, fdd, fyy, smm, sdd, syy;
	float date1, date2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &fmm, &fdd, &fyy);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &smm, &sdd, &syy);

	date1 = (fyy * 365.25f) + (fmm * 30.437f + fdd);
	date2 = (syy * 365.25f) + (smm * 30.437f + sdd);

	if (date1 <= date2) {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", fmm, fdd, fyy, smm, sdd, syy);
	} else
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", smm, sdd, syy, fmm, fdd, fyy);

	return 0;
}