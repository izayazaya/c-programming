#include <stdio.h>
#define SIZE 5

int main(void){
    int List[5]={0}, idx;

    for(idx = 0; idx < SIZE; idx++){
        printf("Enter an integer value %i: ", idx);
        scanf("%i", &List[idx]);
    }

    return 0;
}