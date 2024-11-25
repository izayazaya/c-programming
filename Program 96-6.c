// I needed to write a program like this that only required four if statements but I couldn't pull it off
// I had to use 6 because I couldn't think of a way to make it work with only four if statements, maybe I can in the future...

#include <stdio.h>

int main(void) {
	int i1, i2, i3, i4, largest, smallest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

	if (i1 > i2 && i1 > i3 && i1 > i4) {
		largest = i1;
	} else if (i2 > i3 && i2 > i4) {
		largest = i2;
	} else if (i3 > i4) {
		largest = i3;
	} else
		largest = i4;

	if (i1 < i2 && i1 < i3 && i1 < i4) {
		smallest = i1;
	} else if (i2 < i3 && i2 < i4) {
		smallest = i2;
	} else if (i3 < i4) {
		smallest = i3;
	} else
		smallest = i4;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}