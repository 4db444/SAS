#include <stdio.h>

void print_array (int array [10]){
    printf("[");
    for (int i = 0; i < 10; i++){
        printf("%d", array[i]);
        if(i == 10 - 1){
            printf("]");
        } else{
            printf(", ");
        }
    }
}

int main (){
    int array[10] = {8, 9, 2, 3, 4, 1, 5, 7, 6, 0};
    int temp = 0;
    int min = 0;
    
    printf("Here is the array before: ");
    print_array(array);
    printf("\n");

    // selection sort
    for(int i = 0; i < 10; i++){
        min = i;
        for(int j = i + 1; j < 10; j++){
            if(array[min] > array[j]){
                min = j;
            }
        }

        temp = array[min];
        array [min] = array[i];
        array [i] = temp;
    }

    printf("Here is the array after: ");
    print_array(array);

    return 0;
}