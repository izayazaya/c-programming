#include <stdio.h>

void reverse(int[], int);

int main(void){
    int n;

    printf("Enter the amount of inputs to be read: ");
    scanf("%i", &n);

    int list[n], count;

    for(count = 0; count < n; count++){
        printf("Enter a number for index %i: ", count);
        scanf("%i", &list[count]);
    }

    printf("In reverse order:\n");

    reverse(list, n);

    return 0;
}

void reverse(int x[], int y){
    int count;
    for(count = y - 1; count >= 0; count--){
        printf("%i  ", x[count]);
    }
}