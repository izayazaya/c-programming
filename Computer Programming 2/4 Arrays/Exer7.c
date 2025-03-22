#include <stdio.h>

int sum_of_positive(int [], int);

int sum_of_negative(int [], int);

int main(void){
    int n;

    printf("Enter the amount of numbers you want to add: ");
    scanf("%i", &n);

    int numbers[n], count;

    for(count = 0; count < n; count++){
        printf("Enter numbers to be added (whether positive or negative, they'll be added separately): ");
        scanf("%i", &numbers[count]);
    }

    printf("The sum of all positive numbers is %i.\n", sum_of_positive(numbers, n));
    printf("The sum of all negative numbers is %i.\n", sum_of_negative(numbers, n));

    return 0;
}

int sum_of_positive(int x[], int y){
    int count, sum = 0;
    for(count = 0; count < y; count++){
        if(x[count] > 0){
            sum += x[count];
        }
    }

    return sum;
}

int sum_of_negative(int x[], int y){
    int count, sum = 0;
    for(count = 0; count < y; count++){
        if(x[count] < 0){
            sum += x[count];
        }
    }
    return sum;
}