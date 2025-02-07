/*  34-3.c

    Izayaa
    August 2X, 2024

    C Programming: A Modern Approach, Second Edition
    Chapter 2. Programming Project 3

    Modify the program of Programming Project 2 so that it
    prompts the user to enter the radius of the sphere.

*/

#include <stdio.h>

int main(void) {
    float radius, volume;

    printf("Enter a radius in meters: ");
    scanf("%f", &radius);

    volume = (4.0f/3.0f) * 3.14159 * (radius * radius * radius);

    printf("The volume of a sphere with a 10-meter radius is %f m^3", volume);

    return 0;
}