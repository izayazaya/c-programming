#include <stdio.h>

int main(void){
    FILE *fp1, *fp2;
    fp1 = fopen("3input.dat", "r");
    fp2 = fopen("3output.dat", "w");
    int x;

    if(fp1 == NULL){
        printf("The file doesn't have any content\n");
    }else{
        while(1){
            fscanf(fp1, "%i", &x);
            if(!feof(fp1)){
                fprintf(fp2, "%i\n", x);
            }else{
                break;
            }
        }
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}