#include <stdio.h>

float fahrenheitToCelsius();

int main(void){
    fahrenheitToCelsius();

    return 0;
}

float fahrenheitToCelsius(){
    float fahrenheit, celsius;
    printf("Enter a value in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.00f) * 5.00f/9.00f;
    printf("The fahrenheit value converted to celsius is: %.2f", celsius);
}