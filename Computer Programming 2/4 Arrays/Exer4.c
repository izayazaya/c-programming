#include <stdio.h>

void split(int [], int, int);

int main(void){
    int list[20] = {1, 3, -5, 7, -9, 0, 1, 0, 5, -9, 1, 2, 4, -5, 6, 7, -9, 0, 6, -2};
    int count, negAmount = 0, posAmount = 0;

    for(count = 0; count < 20; count++){
        if(list[count] < 0){
            negAmount++;
        }else if(list[count] > 0){
            posAmount++;
        }
    }
    split(list, negAmount, posAmount);

    return 0;
}

void split(int x[], int y, int z){
    int positive[z], negative[y], zero;
    int count, miniCount = 0;
    for(count = 0; count < 20; count++){
        if(x[count] > 0){
            positive[miniCount] = x[count];
            miniCount++;
        }
    }
    miniCount = 0;
    for(count = 0; count < 20; count++){
        if(x[count] < 0){
            negative[miniCount] = x[count];
            miniCount++;
        }
    }
    miniCount = 0;
    for(count = 0; count < 20; count++){
        if(x[count] == 0){
            zero++;
        }
    }

    printf("positive = {");
    for(count = 0; count < z; count++){
        if(count != z - 1){
            printf("%i, ", positive[count]);
        }else{
            printf("%i}\n", positive[count]);
        }
    }

    printf("negative = {");
    for(count = 0; count < y; count++){
        if(count != y - 1){
            printf("%i, ", negative[count]);
        }else{
            printf("%i}\n", negative[count]);
        }
    }
    printf("There are %i zeroes in the list.\n", zero);
}