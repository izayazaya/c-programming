#include <stdio.h>

int main(void){
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%i", &rows);
    printf("Enter the number of columns: ");
    scanf("%i", &columns);

    int matrix1[rows][columns], matrix2[rows][columns], matrix3[rows][columns], count1, count2;

    printf("For the first matrix's elements\n");
    for(count1 = 0; count1 < rows; count1++){
        for(count2 = 0; count2 < columns; count2++){
            printf("Enter a value for an element: ");
            scanf("%i", &matrix1[count1][count2]);
        }
    }

    printf("For the second matrix's elements\n");
    for(count1 = 0; count1 < rows; count1++){
        for(count2 = 0; count2 < columns; count2++){
            printf("Enter a value for an element: ");
            scanf("%i", &matrix2[count1][count2]);
        }
    }

    for(count1 = 0; count1 < rows; count1++){
        for(count2 = 0; count2 < columns; count2++){
            matrix3[count1][count2] = matrix1[count1][count2] + matrix2[count1][count2];
        }
    }

    // This section is just for printing the 3 different matrices
    // to the console.

    printf("[");
    for(count1 = 0; count1 < rows; count1++){
        for(count2 = 0; count2 < columns; count2++){
            printf("%3i  ", matrix1[count1][count2]);
        }
    }
    printf("]\n");
    printf("+\n");
    printf("[");
    for(count1 = 0; count1 < rows; count1++){
        for(count2 = 0; count2 < columns; count2++){
            printf("%3i  ", matrix2[count1][count2]);
        }
    }
    printf("]\n");
    printf("=\n");
    printf("[");
    for(count1 = 0; count1 < rows; count1++){
        for(count2 = 0; count2 < columns; count2++){
            printf("%3i  ", matrix3[count1][count2]);
        }
    }
    printf("]\n");

    return 0;
}