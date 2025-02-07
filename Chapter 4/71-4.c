/*  71-4.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 4, Programming Project 4

	Write a program tha reads an integer entered by the user and
	displays it in octal (base 8):

	   Enter a number between 0 and 32767: 1953
	   In octal, your number is: 03641

	The output should be displayed using five digits, even if fewer
	digits are sufficient. Hint: To convert the number to octal, first
	divide it by 8; the remainder is the last digit of the octal number
	(1, in this case). Then divide the original number by 8 and repeat
	the process to arrive at the next-to-last digit. (printf is capable
	of displaying numbers in base 8, as we'll see in Chapter 7, so there's
	actually an easier way to write this program.)

*/

#include <stdio.h>

int main(void) {
	int integer, octal1, octal2, octal3, octal4, octal5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &integer);

	octal1 = integer % 8;
	octal2 = integer / 8 % 8;
	octal3 = integer / 8 / 8 % 8;
	octal4 = integer / 8 / 8 / 8 % 8;
	octal5 = integer / 8 / 8 / 8 / 8 % 8;
	printf("In octal, your number is: %d%d%d%d%d", octal5, octal4, octal3, octal2, octal1);
}