#include <stdio.h>

void sort(int [], int [], int [], int);

int main(void){
    FILE *fp1, *fp2, *fp3;
    fp1 = fopen("4input1.dat", "r");
    fp2 = fopen("4input2.dat", "r");
    fp3 = fopen("4merged.dat", "w");
    int array1[10], array2[10], array3[20];
    int x = sizeof(array3)/sizeof(array3[0]);

    if(fp1 == NULL || fp2 == NULL){
        printf("One or both of the files don't have any content");
    }else{
        for(int i = 0; i < sizeof(array1)/sizeof(array1[0]); i++){
            fscanf(fp1, "%i", &array1[i]);
            fscanf(fp2, "%i", &array2[i]);
        }
        sort(array1, array2, array3, x);

        for(int i = 0; i < x; i++){
            fprintf(fp3, "%i\n", array3[i]);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}

void sort(int array1[], int array2[], int array3[], int x){
    int j = 0, k = 0;
    for(int i = 0; i < x; i++){
        if(array1[j] > array2[k]){
            array3[i] = array2[k++];
        }else{
            array3[i] = array1[j++];
        }
        if(j >= 11){
            array3[i] = array2[k++];
        }else if(k >= 11){
            array3[i] = array1[j++];
        }
    }
}