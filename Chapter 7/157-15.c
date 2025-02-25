/*  157-15.c

    Izayaa
    February 26, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 15

    Write a program that computes the factorial of a
    positive integer:

        Enter a positive integer: 6
        Factorial of 6: 720

    (a) Use a short variable to store the value of the
        factorial. What is the largest value of n for
        which the program correctly prints the factorial
        of n?
    (b) Repeat part (a), using an int variable instead.
    (c) Repeat part (a), using a long variable instead.
    (d) Repeat part (a), using a long long variable.
        instead (if your compiler supports the long
        long type).
    (e) Repeat part (a), using a float variable instead.
    (f) Repeat part (a), using a double variable instead.
    (g) Repeat part (a), using a long double variable
        instead.

    In cases (e)-(g), the program will display a close
    approximation of the factorial, not necessarily
    the exact value.

*/

#include <stdio.h>

int main(void){
    long double integer, factorial = 0;

    printf("Enter a positive integer: ");
    scanf("%Lf", &integer);

    for(int i = 0; i <= integer; i++){
        if(i == 0){
            factorial = 1;
        }else{
            factorial *= i;
        }
    }

    printf("Factorial of %Lf: %Lf", integer, factorial);

    return 0;
}

// Short - Integer = 15
// Int - Integer = 27
// Long - Integer = 49
// Long Long - Integer = 63
// Float - Integer = 34
// Double - Integer = 170
// Long Double - Integer = 1754 (DAMNNN)