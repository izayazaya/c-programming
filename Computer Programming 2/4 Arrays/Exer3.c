#include <stdio.h>

void merge(int [], int [], int []);

int main(void){
    int list1[10] = {1, 3, 5, 7, 9, 11, 12, 13, 15, 19};
    int list2[10] = {1, 2, 4, 5, 6, 7, 9, 10, 16, 20};
    int list3[20];

    merge(list1, list2, list3);

    return 0;
}

void merge(int list1[], int list2[], int list3[]){
    int count, miniCount = 0, miniMiniCount = 0;
    for(count = 0; count < 20; count++){
        if(list1[miniCount] >= list2[miniMiniCount]){
            list3[count] = list2[miniMiniCount];
            if(miniMiniCount < 10){
                miniMiniCount++;
            }else{
                list3[count] = list1[miniCount];
            }
        }else if(list1[miniCount] < list2[miniMiniCount]){
            list3[count] = list1[miniCount];
            if(miniCount < 10){
                miniCount++;
            }else{
                list3[count] = list2[miniMiniCount];
            }
        }
    }

    printf("{");
    for(count = 0; count < 20; count++){
        if(count != 19){
            printf("%i, ", list3[count]);
        }else{
            printf("%i}", list3[count]);
        }
    }
}