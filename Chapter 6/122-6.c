/*  122-6.c

    Izayaa
    October XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 6, Programming Project 6

	Write a program that prompts the user to enter a
	number n, then prints all even squares between
	1 and n. For example, if the user enters 100, the
	program should print the following:

	   4
	   16
	   36
	   64
	   100

*/

#include <stdio.h>

int main(void) {
	int l, m, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	l = 2;
	m = 0;
	while (m < n) {
		m = l * l;
		if (m > n) {
			break;
		}
		printf("%d\n", m);
		l += 2;
	}

	return 0;
}