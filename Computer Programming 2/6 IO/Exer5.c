#include <stdio.h>

#define SIZE 10

void segregator(int [], int [], int []);

int main(void){
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("5input.dat", "r");
    fp2 = fopen("5positive.dat", "w");
    fp3 = fopen("5negative.dat", "w");
    int array1[SIZE], array2[SIZE] = {0}, array3[SIZE] = {0};
    int x;

    if(fp1 == NULL){
        printf("The file doesn't contain any content.\n");
    }else{
        fscanf(fp1, "%i", &x);
        for(int i = 0; i < x; i++){
            fscanf(fp1, "%i", &array1[i]);
        }
        segregator(array1, array2, array3);

        for(int i = 0; i < x; i++){
            if(array2[i] != 0){
                fprintf(fp2, "%i\n", array2[i]);
            }
            if(array3[i] != 0){
                fprintf(fp3, "%i\n", array3[i]);
            }else{
                break;
            }
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}

void segregator(int array1[], int array2[], int array3[]){
    int j = 0, k = 0;
    for(int i = 0; i < SIZE; i++){
        if(array1[i] > 0){
            array2[j++] = array1[i];
        }else if(array1[i] < 0){
            array3[k++] = array1[i];
        }
    }
}