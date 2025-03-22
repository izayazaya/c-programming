#include <stdio.h>

int sum_of_index(int, int);

int main(void){
    int list1[10] = {1, 3, -5, 7, -9, 0, 1, 0, 5, -9};
    int list2[10] = {1, 2, 4, -5, 6, 7, -9, 0, 6, -2};
    int count;

    for(count = 0; count < 10; count++){
        printf("%i + %i = %i\n", list1[count], list2[count], sum_of_index(list1[count], list2[count]));
    }

    return 0;
}

int sum_of_index(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}