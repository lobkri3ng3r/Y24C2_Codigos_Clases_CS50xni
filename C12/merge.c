#include <stdio.h>

void merge(int arr[], int left[], int leftSize, int right[], int rightSize);
void mergeSort(int arr[], int size);



int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    mergeSort(arr, size);

    printf("\nArray after sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return;
    }

    int middle = size / 2;
    int left[middle];
    int right[size - middle];

    for (int i = 0; i < middle; i++) {
        left[i] = arr[i];
    }
    for (int i = middle; i < size; i++) {
        right[i - middle] = arr[i];
    }

    mergeSort(left, middle);
    mergeSort(right, size - middle);
    merge(arr, left, middle, right, size - middle);
}