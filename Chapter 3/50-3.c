/*  50-3.c

    Izayaa
    August 3X, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 3, Programming Project 3

	Books are identified by an International Standard Book Number
	(ISBN). ISBNs assigned after January 1, 2007 contain 13 digits
	arrange in five groups (Older ISBNs use 10 digits).

	Write a program that breaks down the International Standard
	Book Number (ISBN) entered by a user:

	   Enter ISBN: 978-0-939-97950-3
	   GS1 prefix: 978
	   Group identifier: 0
	   Publisher code: 393
	   Item number: 97950
	   Check digit: 3

	Note: The number of digits in each group may vary; you can't
	assume that the groups have the lengths shown in this example.
	Test your program with actual ISBN values (usually found on the
	back cover of a book and on the copyright page).

*/

#include <stdio.h>

int main (void) {
	int gsi_prefix, group_identifier, publisher_code, item_no, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &item_no, &check_digit);

	printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d", gsi_prefix, group_identifier, publisher_code, item_no, check_digit);

	return 0;
}