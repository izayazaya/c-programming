#include <stdio.h>
#define ROW 5
#define COLUMN 2

int main(void){
    float conversionMatrix[ROW][COLUMN];
    float amount;
    int currency;

    const float phpToUSD = 0.0172f;
    conversionMatrix[0][0] = 0.38f, conversionMatrix[0][1] = conversionMatrix[0][0] * phpToUSD;
    conversionMatrix[1][0] = 13.06f, conversionMatrix[1][1] = conversionMatrix[1][0] * phpToUSD;
    conversionMatrix[2][0] = 41.14f, conversionMatrix[2][1] = conversionMatrix[2][0] * phpToUSD;
    conversionMatrix[3][0] = 64.27f, conversionMatrix[3][1] = conversionMatrix[3][0] * phpToUSD;
    conversionMatrix[4][0] = 7.97f, conversionMatrix[4][1] = conversionMatrix[4][0] * phpToUSD;

    do{
        printf("Enter 0 in both queries to terminate.\n");
        printf("Enter the currency you'd like to convert(1=JPY, 2=MYR, 3=SGD, 4=CHF, 5=CNY): ");
        scanf("%i", &currency);
        printf("Enter the amount you'd like to convert: ");
        scanf("%f", &amount);
        if(currency > 0 && currency <= 5){
            printf("\tORIGINAL\tPHP\t\tUSD\n");
        }
        switch(currency){
            case 0: printf("Program terminated.\n"); break;
            case 1: conversionMatrix[0][0] *= amount, conversionMatrix[0][1] *= amount;
                printf("JPY\t%.2f\t\t%.2f\t%.2f\n\n", amount, conversionMatrix[0][0], conversionMatrix[0][1]); break;
            case 2: conversionMatrix[1][0] *= amount, conversionMatrix[1][1] *= amount;
                printf("MYR\t%.2f\t\t%.2f\t%.2f\n\n", amount, conversionMatrix[1][0], conversionMatrix[1][1]); break;
            case 3: conversionMatrix[2][0] *= amount, conversionMatrix[2][1] *= amount;
                printf("SGD\t%.2f\t\t%.2f\t%.2f\n\n", amount, conversionMatrix[2][0], conversionMatrix[2][1]); break;
            case 4: conversionMatrix[3][0] *= amount, conversionMatrix[3][1] *= amount;
                printf("CHF\t%.2f\t\t%.2f\t%.2f\n\n", amount, conversionMatrix[3][0], conversionMatrix[3][1]); break;
            case 5: conversionMatrix[4][0] *= amount, conversionMatrix[4][1] *= amount;
                printf("CHY\t%.2f\t\t%.2f\t%.2f\n\n", amount, conversionMatrix[4][0], conversionMatrix[4][1]); break;
            default: printf("That is not one of the options.\n\n"); break;
        }
    }while(currency != 0 && amount != 0);

    return 0;
}