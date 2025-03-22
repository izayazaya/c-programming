#include <stdio.h>

int main(void){
    int list1[10] = {1, 3, -5, 7, -9, 0, 1, 0, 5, -9};
    int list2[10] = {1, 2, 4, -5, 6, 7, -9, 0, 6, -2};
    int list3[20], count;

    for(count = 0; count < 20; count++){
        if(count < 10){
            list3[count] = list1[count];
        }else{
            list3[count] = list2[count - 10];
        }
    }

    printf("List1 contains: ");
    for(count = 0; count < 10; count++){
        if(count != 9){
            printf("%i, ", list1[count]);
        }else{
            printf("%i\n", list1[count]);
        }
    }

    printf("List2 contains: ");
    for(count = 0; count < 10; count++){
        if(count != 9){
            printf("%i, ", list2[count]);
        }else{
            printf("%i\n", list2[count]);
        }
    }

    printf("List3 contains: ");
    for(count = 0; count < 20; count++){
        if(count != 19){
            printf("%i, ", list3[count]);
        }else{
            printf("%i\n", list3[count]);
        }
    }

    return 0;
}