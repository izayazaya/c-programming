#include <stdio.h>

int main(void) {
	int hour, minutes, minutes_passed, dhour, dminutes, ahour, aminutes;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minutes);

	minutes_passed = hour * 60 + minutes;

	if (minutes_passed < (8 * 60 + 0 + 52)) {
		dhour = 8;
		dminutes = 0;
		ahour = 10;
		aminutes = 16;
	} else if (minutes_passed < (9 * 60 + 43 + 48)) {
		dhour = 9;
		dminutes = 43;
		ahour = 11;
		aminutes = 52;
	} else if (minutes_passed < (11 * 60 + 19 + 44)) {
		dhour = 11;
		dminutes = 19;
		ahour = 13;
		aminutes = 31;
	} else if (minutes_passed < (12 * 60 + 47 + 37)) {
		dhour = 12;
		dminutes = 47;
		ahour = 15;
		aminutes = 0;
	} else if (minutes_passed < (14 * 60 + 0 + 53)) {
		dhour = 14;
		dminutes = 0;
		ahour = 16;
		aminutes = 8;
	} else if (minutes_passed < (15 * 60 + 45 + 98)) {
		dhour = 15;
		dminutes = 45;
		ahour = 17;
		aminutes = 55;
	} else if (minutes_passed < (19 * 60 + 0 + 83)) {
		dhour = 19;
		dminutes = 0;
		ahour = 21;
		aminutes = 20;
	} else if (minutes_passed < (21 * 60 + 45 + 60)) {
		dhour = 21;
		dminutes = 45;
		ahour = 23;
		aminutes = 58;
	}

	int twelvedhour, twelveahour;

	switch (dhour) {
		case 0: twelvedhour = 12; break;
		case 1: twelvedhour = 1; break;
		case 2: twelvedhour = 2; break;
		case 3: twelvedhour = 3; break;
		case 4: twelvedhour = 4; break;
		case 5: twelvedhour = 5; break;
		case 6: twelvedhour = 6; break;
		case 7: twelvedhour = 7; break;
		case 8: twelvedhour = 8; break;
		case 9: twelvedhour = 9; break;
		case 10: twelvedhour = 10; break;
		case 11: twelvedhour = 11; break;
		case 12: twelvedhour = 12; break;
		case 13: twelvedhour = 1; break;
		case 14: twelvedhour = 2; break;
		case 15: twelvedhour = 3; break;
		case 16: twelvedhour = 4; break;
		case 17: twelvedhour = 5; break;
		case 18: twelvedhour = 6; break;
		case 19: twelvedhour = 7; break;
		case 20: twelvedhour = 8; break;
		case 21: twelvedhour = 9; break;
		case 22: twelvedhour = 10; break;
		case 23: twelvedhour = 11; break;
	}

	switch (ahour) {
		case 0: twelveahour = 12; break;
		case 1: twelveahour = 1; break;
		case 2: twelveahour = 2; break;
		case 3: twelveahour = 3; break;
		case 4: twelveahour = 4; break;
		case 5: twelveahour = 5; break;
		case 6: twelveahour = 6; break;
		case 7: twelveahour = 7; break;
		case 8: twelveahour = 8; break;
		case 9: twelveahour = 9; break;
		case 10: twelveahour = 10; break;
		case 11: twelveahour = 11; break;
		case 12: twelveahour = 12; break;
		case 13: twelveahour = 1; break;
		case 14: twelveahour = 2; break;
		case 15: twelveahour = 3; break;
		case 16: twelveahour = 4; break;
		case 17: twelveahour = 5; break;
		case 18: twelveahour = 6; break;
		case 19: twelveahour = 7; break;
		case 20: twelveahour = 8; break;
		case 21: twelveahour = 9; break;
		case 22: twelveahour = 10; break;
		case 23: twelveahour = 11; break;
	}

	if (dhour < 12) {	
		if (ahour < 12) {
			printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m\n", twelvedhour, dminutes, twelveahour, aminutes);
		} else
			printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d p.m\n", twelvedhour, dminutes, twelveahour, aminutes);
	} else
		printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m\n", twelvedhour, dminutes, twelveahour, aminutes);

	return 0;
}