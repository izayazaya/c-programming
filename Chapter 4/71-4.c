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