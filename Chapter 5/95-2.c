/*  95-2.c

    Izayaa
    September XX, 2024

	C Programming: A Modern Approach, Second Edition
	Chapter 5, Programming Project 2

	Write a program that asks the user for a 24-hour time,
	then displays the time in 12-hour form:

	   Enter a 24-hour time: 21:11
	   Equivalent 12-hour time: 9:11 PM

	Be careful not to display 12:00 as 0:00.

*/

#include <stdio.h>

int main(void) {
	int time24hrs, time24mins, time12;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &time24hrs, &time24mins);

	switch (time24hrs) {
		case 0: time12 = 12; break;
		case 1: time12 = 1; break;
		case 2: time12 = 2; break;
		case 3: time12 = 3; break;
		case 4: time12 = 4; break;
		case 5: time12 = 5; break;
		case 6: time12 = 6; break;
		case 7: time12 = 7; break;
		case 8: time12 = 8; break;
		case 9: time12 = 9; break;
		case 10: time12 = 10; break;
		case 11: time12 = 11; break;
		case 12: time12 = 12; break;
		case 13: time12 = 1; break;
		case 14: time12 = 2; break;
		case 15: time12 = 3; break;
		case 16: time12 = 4; break;
		case 17: time12 = 5; break;
		case 18: time12 = 6; break;
		case 19: time12 = 7; break;
		case 20: time12 = 8; break;
		case 21: time12 = 9; break;
		case 22: time12 = 10; break;
		case 23: time12 = 11; break;
	}
	if (time24hrs >= 12 && time24hrs <= 23) {
		printf("Equivalent 12-hour time: %d:%.2d PM", time12, time24mins);
	} else if (time24hrs >= 0 && time24hrs <= 11) {
		printf("Equivalent 12-hour time: %d:%.2d AM", time12, time24mins);
	} else {
		printf("That is not a valid time input");
	}
	return 0;
}