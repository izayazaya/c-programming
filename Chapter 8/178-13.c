/*  178-13.c

    Izayaa
    April 1, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 13

    Modify Progamming Project 11 from Chapter 7 so that
    the program labels its output:

        Enter a first and last name: Lloyd Fosdick
        You entered the name: Fosdick, L.

    The program will need to store the last name (but not
    the first name) in an array of characters until it
    can be printed. You may assume that the last name is
    no more than 20 characters long.

*/

#include <stdio.h>

#define SIZE 20

int main(void){
    char firstName, lastName[SIZE];

    printf("Enter a first and last name: ");
    firstName = getchar();

    while(getchar() != ' ');

    printf("You entered the name: ");
    for(int i = 0; (lastName[i] = getchar()) != '\n'; i++){
        printf("%c", lastName[i]);
    }

    printf(", %c.", firstName);

    return 0;
}