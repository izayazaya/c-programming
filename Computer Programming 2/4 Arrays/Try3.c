#include <stdio.h>
#define SIZE 5

int main(void){
    int List[5] = {0}, idx, Target, Found;

    for(idx = 0; idx < SIZE; idx++){
        printf("Enter an integer value %i: ", idx);
        scanf("%i", &List[idx]);
    }

    printf("Enter an integer value to search: ");
    scanf("%i", &Target);
    idx = 0;

    do{
        if(Target == List[idx]){
            printf("\nTarget %i found at index %i", Target, idx);
            Found = 1;
        }else{
            Found = 0;
        }
        idx++;
    }while(!Found && idx < SIZE);

    if(!Found){
        printf("\nNot Found");
    }

    printf("\nList");
    for(idx = 0; idx < SIZE; idx++){
        printf("\n%i", List[idx]);
    }

    return 0;
}