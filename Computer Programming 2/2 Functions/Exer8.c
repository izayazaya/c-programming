#include <stdio.h>

float largest(float, float, float);

int main(void){
    float a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("The largest among the three numbers given is %.2f", largest(a, b, c));

    return 0;
}

float largest(float a, float b, float c){
    float largest;
    if(a > b && a > c){
        largest = a;
    }else if(b > a && b > c){
        largest = b;
    }else{
        largest = c;
    }
    return largest;
}