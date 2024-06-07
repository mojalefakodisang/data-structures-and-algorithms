#include "arrays.h"

/**
* print_array - Prints elements of array on a new line
* @arr: Array to be printed
* @size: Size of @arr
*/
void print_array(int arr[], int size) {
    int i = 0;

    printf("[");
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    
    printf("]\n");
}