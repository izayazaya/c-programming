#include <stdio.h>

int main(void){
    int n;

    printf("Enter the amount of numbers you want to test: ");
    scanf("%i", &n);

    int numbers[n], count, max, min, maxIndex, minIndex;

    for(count = 0; count < n; count++){
        printf("Enter number to be added to the array: ");
        scanf("%i", &numbers[count]);
    }

    min = 0;
    max = 0;
    for(count = 0; count < n; count++){
        if(numbers[count] <= min){
            min = numbers[count];
            minIndex = count;
        }else if(numbers[count] >= max){
            max = numbers[count];
            maxIndex = count;
        }
    }

    printf("The smallest number is %i. It is at index %i.\n", min, minIndex);
    printf("The largest number is %i. It is at index %i.\n", max, maxIndex);

    return 0;
}