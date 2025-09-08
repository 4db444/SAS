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

int partition (int arr[], int start, int end){

    int i = start -1;
    int temp = 0;
    
    for (int j = start; j < end; j++){
        if (arr[end] > arr[j]){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    i++;

    temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

void quick_sort (int arr[], int start, int end){

    if(start >= end) return;
    
    int pivot = partition(arr, start, end);

    quick_sort(arr, start, pivot - 1);
    quick_sort(arr, pivot + 1, end);
}

int main (){
    int array[10] = {8, 9, 2, 3, 4, 1, 5, 7, 6, 0};
    
    printf("Here is the array before: ");
    print_array(array);
    printf("\n");

    // quick sort
    quick_sort(array, 0, 9);

    printf("Here is the array after: ");
    print_array(array);

    return 0;
}