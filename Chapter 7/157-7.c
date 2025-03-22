/*  157-7.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 7

    Modify Programming Project 6 from Chapter 3 so that the
    user may add, subtract, multiply, or divide two fractions
    (by entering either +, -, *, or / between the fractions).

*/

#include <stdio.h>

int main(void) {
    int num1, num2, denom1, denom2, numsum, denomsum, numdifference, denomdifference, numproduct, denomproduct, numquotient, denomquotient;
    char operator;

    printf("Enter two fractions: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

    switch(operator){
        case '+':printf("The sum is %d/%d\n", numsum = num1 * denom2 + num2 * denom1, denomsum = denom1 * denom2);
            break;
        case '-':printf("The difference is %d/%d\n", numdifference = num1 * denom2 - num2 * denom1, denomdifference = denom1 * denom2);
            break;
        case '*':printf("The product is %d/%d\n", numproduct = num1 * num2, denomproduct = denom1 * denom2);
            break;
        case '/':printf("The quotient is %d/%d\n", numquotient = num1 * denom2, denomquotient = denom1 * num2);
            break;
        default:printf("That's not a valid operator.\n");
    }

    return 0;
}