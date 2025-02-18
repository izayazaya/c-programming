#include <stdio.h>

int main(void){
    int n;

    printf("Enter the amount of numbers to store: ");
    scanf("%i", &n);

    int list[n], count, search, found, index;

    for(count = 0; count < n; count++){
        printf("Enter number to store: ");
        scanf("%i", &list[count]);
    }

    printf("Enter a number that you want to search from the list: ");
    scanf("%i", &search);

    for(count = 0; count < n; count++){
        if(search == list[count]){
            found = 1;
            index = count;
            printf("%i can be found at index %i\n", list[count], index);
        }else{
            found = 0;
        }
    }

    if(found == 0){
        printf("%i is not in the list.\n", search);
    }

    return 0;
}