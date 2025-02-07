/*  50-4.c

    Izayaa
    August 3X, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 3, Programming Project 4

	Write a program that prompts the user to enter a telephone
	number in the form (xxx) xxx-xxxx and then displays the
	number in the form xxx.xxx.xxxx:

	   Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
	   You entered 404.817.6900

*/

#include <stdio.h>

int main(void) {
	int firstpart, secondpart, thirdpart;

	printf("Enter phone number (xxxx xxx xxxx): ");
	scanf("%d %d %d", &firstpart, &secondpart, &thirdpart);

	printf("You entered: %.4d.%d.%d", firstpart, secondpart, thirdpart);

	return 0;
}