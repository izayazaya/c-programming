#include <stdio.h>

int main(void){
    int n;
    int sum = 0;
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n);

    for(int i = n; i != 0; i--){
        sum += i;
    }

    printf("The summation is = %d if n is %d", sum, n);

    return 0;
}