/*  216-1.c

    Izayaa
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 9, Programming Project 1

    Write a program that asks the user to enter a se-
    ries of integers (which it stores in an array),
    then sorts the integers by calling the function
    selection_sort. When given an array with n elements,
    selection_sort must do the following:

        1. Search the array to find the largest element,
           then move it to the last position in the
           array.
        2. Call itself recursively to sort the first
           n - 1 elements of the array.

*/

#include <stdio.h>

int selection_sort(int [], int);

int main(void){
    int n;

    printf("How many elements do you want the array to have? ");
    scanf("%i", &n);

    int array[n];

    for(int i = 0; i < n; i++){
        printf("Enter the element for index %i: ", i);
        scanf("%i", &array[i]);
    }

    selection_sort(array, n);

    printf("The array sorted is: ");
    for(int i = 0; i < n; i++){
        printf("%i ", array[i]);
    }

    return 0;
}

int selection_sort(int array[], int n){
    int largest = -50, i = 0, temp, temp2;

    if(n == 0){
        return array[i];
    }else{
        while(i < n){
            if(array[i] > largest){
                largest = array[i];
                temp2 = i;
            }
            i++;
        }
        temp = array[n - 1];
        array[n - 1] = largest;
        array[temp2] = temp;
    }
    return selection_sort(array, n - 1);
}