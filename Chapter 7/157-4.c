/*  157-4.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 4

    Write a program that translates an alphabetic phone number
    into numeric form:

        Enter phone number: CALLATT
        2255288

    (In case you don't have a telephone nearby, here are the
    letters on the keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO
    7=PRS, 8=TUV, 9=WXY.) If the original phone number
    contains nonalphabetic characters (digits or punctuation,
    for example), leave them unchanged:

        Enter phone number: 1-800-COL-LECT
        1-800-265-5328

    You may assume that any letters entered by the user are
    upper case.

*/

#include <stdio.h>

int main(void){
    char text;
    int number;

    printf("Enter phone number: ");
    text = getchar();

    while(text != '\n'){
        if(text >= 'A' && text <= 'C'){
            number = 2;
            printf("%d", number);
        }else if(text >= 'D' && text <= 'F'){
            number = 3;
            printf("%d", number);
        }else if(text >= 'G' && text <= 'I'){
            number = 4;
            printf("%d", number);
        }else if(text >= 'J' && text <= 'L'){
            number = 5;
            printf("%d", number);
        }else if(text >= 'M' && text <= 'O'){
            number = 6;
            printf("%d", number);
        }else if(text >= 'P' && text <= 'S'){
            number = 7;
            printf("%d", number);
        }else if(text >= 'T' && text <= 'V'){
            number = 8;
            printf("%d", number);
        }else if(text >= 'W' && text <= 'Y'){
            number = 9;
            printf("%d", number);
        }else{
            putchar(text);
        }
        text = getchar();
    }

    return 0;
}