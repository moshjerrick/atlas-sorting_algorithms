#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j <= high - 1; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
            printf("Array after swapping: ");
            for (int k = low; k <= high; k++) {
                printf("%d ", array[k]);
            }
            printf("\n");
        }
    }
    swap(&array[i + 1], &array[high]);
    printf("Array after swapping: ");
    for (int k = low; k <= high; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");
    return (i + 1);
}

void quick_sort_helper(int *array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quick_sort_helper(array, low, pi - 1);
        quick_sort_helper(array, pi + 1, high);
    }
}

void quick_sort(int *array, size_t size) {
    quick_sort_helper(array, 0, size - 1);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quick_sort(arr, size);

    printf("Sorted array: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
