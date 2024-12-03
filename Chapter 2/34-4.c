#include <stdio.h>

int main(void) {
    float initial;
    float tax = 0.05f;
    float final;

    printf("Enter an amount: ");
    scanf("%f", &initial);

    final = initial + (tax * initial);

    printf("With tax added: $%.2f", final);

    return 0;
}