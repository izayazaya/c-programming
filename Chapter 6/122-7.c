/*  122-7.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 6, Programming Project 7

	Rearrange the square3.c program so that the for loop
	initializes i, tests i, and increments i. Don't rewrite
	the program; in particular, don't use any multiplications.

*/

#include <stdio.h>

int main(void) {
	int i, n, odd, square;

	printf("This program prints a table of square.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	odd = 3;
	square = 1;
	for (i = 1; i <= n; ++i) {
		printf("%10d%10d\n", i, square);
		square += odd;
		odd += 2;
	}
	return 0;
}