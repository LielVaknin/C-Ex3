#include "isort.h"

void shift_element(int* arr, int i){
    for(int j = i; j >= 0; j--){
        *(arr+j) = *(arr+j-1);
    }
}

void insertion_sort(int* arr, int len){
    int j, key, key_index;
    for (int i = 1; i < len; i++)
    {
        key = *(arr+i);
        key_index = i;
        j = i - 1;
        while(j >= 0 && *(arr+j) > key){
            j = j - 1;
        }
        shift_element(arr+j+1, key_index-(j+1));
        *(arr+j+1) = key;
        }
}