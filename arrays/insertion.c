#include "arrays.h"

int insertion(int arr[], int size, int x, int pos) {
    int i = 0;

    if (pos > size) {
        printf("Error: position of insertion > size of array");
        return (-1);
    }

    for (i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;

    return (0);
}