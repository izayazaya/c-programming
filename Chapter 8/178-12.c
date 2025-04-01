/*  178-12.c

    Izayaa
    April 1, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 12

    Modify Programming Project 5 from Chapter 7 so
    that the SCRABBLE value of the letters are stored
    in an array. The array will have 26 elements, corr-
    esponding to the 26 letters of the alphabet. For
    example, element 0 of the array will store 1 (be-
    cause the SCRABBLE value of the letter A is 1),
    element 1 of the array will store 3 (because the
    SCRABBLE value of the letter B is 3), and so forth.
    As each character of the input word is read, the
    program will use the array to determine the SCRABBLE
    value of that character. Use and array initializer to
    set up the array.

*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    char text;
    int value[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int sum = 0;

    printf("Enter a word: ");
    while((text = getchar()) != '\n'){
        text = toupper(text);
        sum += value[text - 'A'];
    }
    printf("Scrabble value: %d", sum);

    return 0;
}