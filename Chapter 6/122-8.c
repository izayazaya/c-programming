/*  122-8.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 6, Programming Project 8

	Write a program that prints a one-month calendar. The user
	specifies the number of days in the month and the day of
	the week on which the month begins:

	   Enter number of days in month: 31
	   Enter starting day of the week (1=Sun, 7=Sat): 3

	          1  2  3  4  5
	    6  7  8  9 10 11 12
	   13 14 15 16 17 18 19
	   20 21 22 23 24 25 26
	   27 28 29 30 31

	Hint: This program isn't as hard as it looks. The most
	important part is a for statement that uses a variable i
	to count from 1 to n, where n is the number of days in the
	month, printing each value of i. Inside the loop, an if
	statement tests whether i is the last day in the week; if
	so, it prints a new-line character.

*/

#include <stdio.h>

int main(void) {
	int i, n, d, e;

	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &d);

	e = 1;
	for (i = 1; i <= n; i++) {
		while (e < d) {
			printf("   ");
			e++;
		}
		printf("%3d", i);
		if ((i + (d - 1)) % 7) {
			continue;
		}
		printf("\n");
	}
	return 0;
}