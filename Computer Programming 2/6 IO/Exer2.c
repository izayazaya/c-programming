#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("2input.dat", "w");
    int array[] = {12, 14, 16, 18, 20, 22, 26, 90, 45, 19};

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        fprintf(fp, "%i\n", array[i]);
    }

    fclose(fp);

    return 0;
}