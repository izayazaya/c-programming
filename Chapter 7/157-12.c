/*  157-12.c

    Izayaa
    February 26, 2025

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
    int flag = 0;
    float operand = 0, divisor = 1.0f, value = 0;
    char expression, operator;

    printf("Enter an expression: ");

    do{
        expression = getchar();
        if(expression >= '0' && expression <= '9'){
            if(expression == '.'){
                flag = 1;
            }else{
                if(flag == 1){
                    divisor /= 10;
                    operand += divisor * (expression - '0');
                }else{
                    operand = operand * 10 + (expression - '0');
                }
            }
        }

    }while(expression != '+' && expression != '-' && expression != '*' && expression != '/' && expression != '\n');

    value = operand;

    while(expression != '\n'){
        operand = 0;
        divisor = 1.0f;
        flag = 0;
        operator = expression;

        expression = getchar();
        while(expression >= '0' && expression <= '9' || expression == '.'){
            if(expression == '.'){
                flag = 1;
            }else{
                if(flag == 1){
                    divisor /= 10;
                    operand += divisor * (expression - '0');
                }else{
                    operand = operand * 10 + (expression - '0');
                }
            }
            expression = getchar();
        }

        if(operator == '+'){
            value += operand;
        }else if(operator == '-'){
            value -= operand;
        }else if(operator == '*'){
            value *= operand;
        }else if(operator == '/'){
            if(operand == 0){
                printf("Error: Division by zero.\n");
                return 1;
            }
            value /= operand;
        }
    }

    printf("Value of expression: %g", value);

    return 0;
}