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

    printf("Here is the array before: ");
    print_array(array);
    printf("\n");

    // bubble sort
    for(int i = 0; i < 9; i++){
        for (int j = 0; j < 10 - i - 1; j ++){
            if (array[j] < array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Here is the array after: ");
    print_array(array);

    return 0;
}
