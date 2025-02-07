#include <stdio.h>

int sum(int, int, int);

int product(int, int, int);

int main(void){
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The sum of the three integers given is: %d\n", sum(a, b, c));
    printf("The product of the three integers given is: %d\n", product(a, b, c));

    return 0;
}

int sum(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}

int product(int a, int b, int c){
    int product = a * b * c;
    return product;
}