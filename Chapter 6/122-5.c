/*  122-5.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 6, Programming Project 5

	Programming Project 1 in Chapter 4 asked you to write a
	program that displays a two-digit number with its digits
	reversed. Generalize the program so that the number can
	have one, two, three, or more digits.

	Hint: Use a do loop that repeatedly divides the number by
	10, stopping when it reaches 0.

*/

#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("The reversal is: %.1d", n % 10);

	do {;
		n /= 10;
		if (n != 0) {
			printf("%.1d", n % 10);
		}
	} while (n != 0);

	return 0;
}