#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

int main(int argc, char **argv) {
    int size = 5;
    int *arr = (int *)malloc(size * sizeof(int));

    for(int i = 0; i < size; ++i){
        arr[i] = i;
    }

    printf("Cheking contains(): %d\n", contains(arr, size, 4));

    printf("Cheking containsWithin(): %d\n", containsWithin(arr, size, 3, 9, 3));

    printf("Cheking paddedCopy()\n");
    int newSize = 7;
    int *arrCopy = paddedCopy(arr, size, newSize);
    for(int i = 0; i < newSize; ++i){
        printf("%d, ", arrCopy[i]);
    }
    free(arrCopy);
    printf("\n");

    printf("Cheking reverseCopy()\n");
    arrCopy = reverseCopy(arr, size);
    for(int i = 0; i < size; ++i){
        printf("%d, ", arrCopy[i]);
    }
    printf("\n");
    free(arrCopy);

    reverse(arr, size);
    printf("Cheking reverse:\n");
    for(int i = 0; i < size; ++i){
        printf("%d, ", arr[i]);
    }
    printf("\n");
    free(arr);

}