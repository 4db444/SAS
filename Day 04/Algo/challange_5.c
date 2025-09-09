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

void merge (int left_arr[], int left_size, int right_arr[], int right_size, int arr[], int size){

    int r = 0, l = 0, i = 0;

    while(r < right_size && l < left_size){
        if(left_arr[l] < right_arr[r]){
            arr[i] = left_arr[l++]; 
        }else{
            arr[i] = right_arr[r++]; 
        }
        i++;
    }

    while (r < right_size){
        arr[i] = right_arr[r];
        i++;
        r++;
    }

    while (l < left_size){
        arr[i] = left_arr[l];
        i++;
        l++;
    }

    // print_array(arr);
}

void merge_sort (int arr[], int length){
    if(length <= 1) return ;

    const int middle = length / 2;
    int r = 0, l = 0, i;

    int left_arr[middle];
    int right_arr[length - middle];
    
    for ( i = 0; i < length; i++){
        if(i < middle){
            left_arr[l] = arr[i];
            l++;
        }else{
            right_arr[r] = arr[i];
            r++;
        }
    }

    merge_sort(left_arr, middle);
    merge_sort(right_arr, length - middle);
    merge(left_arr,middle, right_arr, length - middle, arr, length);
}

int main (){
    int array[11] = {8, 9, 2, 3, 4, 1, 5, 7, 6, 0};
    int temp = 0;

    printf("Here is the array before: ");
    print_array(array);
    printf("\n");

    // Merge sort
    merge_sort(array, 10);

    printf("Here is the array after: ");
    print_array(array);

    return 0;
}