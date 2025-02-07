/*  95-5.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 5

	In one state, single residents are subject to the following
	income tax:

	Income            Amount of tax
	-------------------------------
	Not over $750     1% of income
	$750 - $2,250     $7.50   plus 2% of amount over $750
	$2,250 - $3,750   $37.50  plus 3% of amount over $2,250
	$3,750 - $5,250   $82.50  plus 4% of amount over $3,750
	$5,250 - $7,000   $142.50 plus 5% of amount over $5,250
	Over $7,000       $230.00 plus 6% of amount over $7,000

	Write a program that asks the user to enter the amount of
	taxable income, then displays the tax due.

*/

#include <stdio.h>

int main(void) {
	float income, tax;

	printf("Enter monthly income: ");
	scanf("%f", &income);

	if (income < 750.00f) {
		tax = 0.01f * income;
	} else if (income < 2250.00f) {
		tax = 7.50f + 0.02f * (income - 750.00f);
	} else if (income < 3750.00f) {
		tax = 37.50f + 0.03f * (income - 2250.00f);
	} else if (income < 5250.00f) {
		tax = 82.50f + 0.04f * (income - 3750.00f);
	} else if (income < 7000.00f) {
		tax = 142.50f + 0.05f * (income - 5250.00f);
	} else 
		tax = 230.00f + 0.06f * (income - 7000.00f);

	printf("The tax due is $%0.2f", tax);

	return 0;
}