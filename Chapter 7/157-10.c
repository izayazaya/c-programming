/*  157-10.c

    Izayaa
    February 9, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 10

    Write a program that counts the number of vowels
    (a, e, i, o, u) in a sentence:

        Enter a sentence: And that's the way it is.
        Your sentence contains 6 vowels.

*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    int amount = 0;
    char vowels;

    printf("Enter a sentence: ");
    do{
        vowels = getchar();
        vowels = toupper(vowels);
        if(vowels == 'A' || vowels == 'E' || vowels == 'I' || vowels == 'O' || vowels == 'U'){
            amount++;
        }
    }while(vowels != '\n');

    printf("Your sentence contains %d vowels", amount);

    return 0;
}