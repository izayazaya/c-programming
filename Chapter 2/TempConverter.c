/* This program I wrote converts celsius to fahrenheit */

#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (9.0f / 5.0f)

int main(void) {
	float celsius, fahrenheit;
	printf("Input Celsius Temperature: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * SCALE_FACTOR + FREEZING_POINT);
	printf("Fahrenheit Equivalent: %.1f\n", fahrenheit);

	return 0;
}