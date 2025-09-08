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
    int j = 0;

    printf("Here is the array before: ");
    print_array(array);
    printf("\n");

    // insertion sort
    for(int i = 1; i < 10; i ++){
        if(array[i] < array[i - 1]){
            j = i;

            while(j > 0 && array [j] < array [j - 1]){
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
                j--;
            }
        }
    }

    printf("Here is the array after: ");
    print_array(array);

    return 0;
}