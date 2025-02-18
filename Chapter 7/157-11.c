/*  157-11.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 11

    Write a program that takes a first name and last
    name entered by the user and displays the last
    name, a comma, and the first initial, followed by
    a period:

        Enter a first and last name: Lloyd Fosdick
        Fosdick, L.

    The user's input may contain extra spaces before
    the first name, between the first and last names,
    and after the last name.

*/

#include <stdio.h>

int main(void){
    char name, name2, name3;

    printf("Enter a first and last name: ");
    do{
        name = getchar();
        name3 = name;
    }while(name == ' ');

    do{
        name = getchar();
    }while(name != ' ');

    do{
        name2 = getchar();
        if(name2 != '\n' && name2 != ' '){
            printf("%c", name2);
        }
    }while(name2 != '\n');

    printf(", %c.", name3);

    return 0;
}