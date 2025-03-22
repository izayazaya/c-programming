#include <stdio.h>

int sum_it_up(int);

int main(void) {
    int addends;
    printf("How many numbers do you want to add? ");
    scanf("%d", &addends);
    printf("The sum of all numbers given is: %d\n", sum_it_up(addends));

    return 0;
}

int sum_it_up(int x){
    int y, sum = 0;
    for(int i = 1; i <= x; i++){
        printf("Enter a number to be added: ");
        scanf("%d", &y);
        sum += y;
    }
    return sum;
}