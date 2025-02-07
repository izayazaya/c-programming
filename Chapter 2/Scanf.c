/* 	Computes the dimensional weight of a
	box from input provided by the user */

#include <stdio.h>
#define INCHES_PER_POUND 166
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)

int main(void)
{
	int height, length, width, volume, weight;
	int i;
	float x;

	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume = height * length * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	scanf("%d", &i); // reads an integer; stores into i
	scanf("%f", &x); // reads a float value; stores into x

	return 0;
}