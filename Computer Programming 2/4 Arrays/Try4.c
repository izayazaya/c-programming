#include <stdio.h>
#define SIZE 5

int main(void){
    int List[5] = {0}, idx;

    for(idx = 0; idx < SIZE; idx++){
        printf("Enter an integer value %i: ", idx);
        scanf("%i", &List[idx]);
    }

    printf("\n\nData\tData * 2");
    printf("\n----\t--------");

    for(idx = 0; idx < SIZE; idx++){
        printf("\n%i\t%i", List[idx], List[idx] * 2);
    }

    return 0;
}