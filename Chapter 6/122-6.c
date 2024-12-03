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