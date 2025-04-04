/*  50-1.c

    Izayaa
    August 3X, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 3, Programming Project 1

	Write a program that accepts a date from the user in the form
	mm/dd/yyyy and then displays it in the form yyyymmdd:

	Enter a date (mm/dd/yyyy): 2/17/2011
	You entered the date 20110217

*/

#include <stdio.h>

int main(void) {
	int m, d, y;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("You entered the date %.4d%.2d%.2d", y, m, d);

	return 0;
}