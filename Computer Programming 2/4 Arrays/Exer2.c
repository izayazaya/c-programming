#include <stdio.h>
#define SIZE 15

int validate(int [], int, int);

int main(void){
    int one[SIZE] = {1, 2, 3, 1, 5, 6, 7, 1, 9, 2, 4, 3, 7, 3, 9};
    int unique[SIZE], i, j = 0;

    for(i = 0; i < SIZE; i++){
        if(validate(unique, j, one[i]) == 0){
            unique[j++] = one[i];
        }
    }

    printf("Original array contains:\n");
    for(i = 0; i < SIZE; i++){
        printf("%i ", one[i]);
    }

    printf("\n\nUnique array contains:\n");
    for(i = 0; i < j; i++){
        printf("%i ", unique[i]);
    }

    return 0;
}

int validate(int x[], int j, int z){
    for(int i = 0; i < j; i++){
        if(x[i] == z){
            return 1;
        }
    }
    return 0;
}