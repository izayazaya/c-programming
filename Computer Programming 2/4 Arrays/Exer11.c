#include <stdio.h>

int main(void){
    int row, column, i, j;

    printf("Enter the amount of rows and columns to multiply: ");
    scanf("%i %i", &row, &column);

    int matrix1[row][column], matrix2[row][column], matrixProduct[row][column];

    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("Enter a number to add to matrix1: ");
            scanf("%i", &matrix1[i][j]);
        }
    }

    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("Enter a number to add to the matrix2: ");
            scanf("%i", &matrix2[i][j]);
        }
    }

    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            matrixProduct[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    printf("The array with the products of matrix1 and matrix2 is:\n{");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            if(j != column - 1 || (j == column - 1 && i != row - 1)){
                printf("%i, ", matrixProduct[i][j]);
            }else if(j == column - 1 && i == row - 1){
                printf("%i}", matrixProduct[i][j]);
            }
        }
    }

    return 0;
}