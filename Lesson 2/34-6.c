#include <stdio.h>

int main(void) {
    int x, product;

    printf("Enter a value for \"x\": ");
    scanf("%d", &x);

    product = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The result of the polynomial with the x = %d is %d", x, product);

    return 0;
}