/*  95-1.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 1

	Write a program that calculates how many digits a
	number contains:

	   Enter a number: 374
	   The number 374 has 3 digits

	You may assume that the number has no more than four digits.
	Hint: Use if statements to test the number. For example, if
	the number is between 0 and 9, it has one digit. If the number
	is between 10 and 99, it has two digits.

*/

#include <stdio.h>

int main(void) {
	int number, digits;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number >= 0 && number <= 9) {
		digits = 1;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 10 && number <= 99) {
		digits = 2;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 100 && number <= 999) {
		digits = 3;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 1000 && number <= 9999) {
		digits = 4;
		printf("The number %d has %d digits", number, digits);
	} else if (number >= 10000 && number <= 99999) {
		digits = 5;
		printf("The number %d has %d digits", number, digits);
	} else {
		printf("I cannot count digits more than five, I am sorry.");
	}

	return 0;
}