#include <stdio.h>
#include "isort.h"
#define ARRAY_SIZE 50
int arr[ARRAY_SIZE];

int main(){
    int *p = arr;
    for (int i = 0; i < ARRAY_SIZE; i++){
        scanf("%d/n",(p+i));
    }
    insertion_sort(arr, ARRAY_SIZE);
    for (int j = 0; j < ARRAY_SIZE-1; j++){
        printf("%d,", *(p+j));
    }
    printf("%d", *(p+49));
    return 0;
}