/*  157-13.c

    Izayaa
    February 26, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 7, Programming Project 13

    Write a program that calculates the average word
    length for a sentence:

        Enter a sentence: It was deja vu all over again.
        Average word length: 3.4

    For simplicitiy, your program should consider a
    punctuation mark to be part of the word to which
    it is attached. Display the average word length
    to one decimal place

*/

#include <stdio.h>

int main(void){
    char sentence;
    float letter = 0, wordCount = 0, result = 0;

    printf("Enter a sentence: ");

    sentence = getchar();

    while(sentence != '\n'){
        while(sentence != ' ' && sentence != '\n'){
            letter++;
            sentence = getchar();
        }
        wordCount++;

        while(sentence == ' '){
            sentence = getchar();
        }
    }

    result = letter / wordCount;

    printf("Average word length: %.1f", result);

    return 0;
}