#include <stdio.h>

int main(void){
    FILE *fp;
    int x;
    fp = fopen("1input.dat", "r");

    if(fp == NULL){
        printf("File doesn't have any content.\n");
    }else{
        while(1){
            fscanf(fp, "%i", &x);
            if(!feof(fp)){
                printf("%i\n", x);
            }else{
                break;
            }
        }
    }

    fclose(fp);

    return 0;
}