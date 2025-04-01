/*  178-11.c

    Izayaa
    April 1, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 11

    Modify Programming Project 4 from Chapter 7 so
    that the program labels its output:

        Enter phone number: 1-800-COL-LECT
        In numeric form: 1-800-265-5328

    The program will need to store the phone number
    (either in its original form or in its numeric
    form) in an array of characters until it can be
    printed. You may assume that the phone number is
    no more than 15 characters long.

*/

#include <stdio.h>

#define SIZE 15

int main(void){
    char text[15];
    int number;

    printf("Enter phone number: ");

    for(int i = 0; i < SIZE; i++){
        text[i] = getchar();
    }

    printf("In numeric form: ");
    for(int i = 0; i < SIZE; i++){
        if(text[i] >= 'A' && text[i] <= 'C'){
            number = 2;
            printf("%d", number);
        }else if(text[i] >= 'D' && text[i] <= 'F'){
            number = 3;
            printf("%d", number);
        }else if(text[i] >= 'G' && text[i] <= 'I'){
            number = 4;
            printf("%d", number);
        }else if(text[i] >= 'J' && text[i] <= 'L'){
            number = 5;
            printf("%d", number);
        }else if(text[i] >= 'M' && text[i] <= 'O'){
            number = 6;
            printf("%d", number);
        }else if(text[i] >= 'P' && text[i] <= 'S'){
            number = 7;
            printf("%d", number);
        }else if(text[i] >= 'T' && text[i] <= 'V'){
            number = 8;
            printf("%d", number);
        }else if(text[i] >= 'W' && text[i] <= 'Y'){
            number = 9;
            printf("%d", number);
        }else{
            putchar(text[i]);
        }
    }

    return 0;
}