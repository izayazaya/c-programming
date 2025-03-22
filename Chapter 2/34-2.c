/*  34-2.c

    Izayaa
    August 2X, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 2. Programming Project 2

    Write a program that computes the volume of a sphere with a 10-meter
    radius, using the formula v = 4/3(pi)r^3. Write the fraction 4/3
    as 4.0f/3.0f.  Hint: C doesn't have an exponentation operator, so
    you'll need to multiply r by itself twice to compute r^3.

*/

#include <stdio.h>

int main(void) {
    float radius = 10.0f;
    float volume;

    volume = (4.0f/3.0f) * 3.14159 * (radius * radius * radius);

    printf("The volume of a sphere with a 10-meter radius is %f m^3", volume);

    return 0;
}