#include "../arrays.h"

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    insertion(arr, len, 10, 2);
    print_array(arr, len);

    return (0);
}