/*  157-12.c

    Izayaa
    February 19, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 12

    Write a program that evaluates an expression:

        Enter an expression: 1+2.5*3
        Value of expression: 10.5

    The operands in the expression are floating-point
    numbers; the operators are +, -, *, and /. The
    expression is evaluated from left to right(no
    operator takes precedence over any other operator).

*/

#include <stdio.h>

int main(void){
    char expression;
    float operand, value;

    printf("Enter an expression: ");
    do{
        scanf("%f\n", &operand);
        expression = getchar();
        switch(expression){
            case '+':
        }
    }while(expression != '\n');

    printf("Value of expression: %f", value);

    return 0;
}