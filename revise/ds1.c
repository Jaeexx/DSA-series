#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void buildMaxHeap(int arr[], int n) {
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}
void findTopK(int arr[], int n, int k) {
    buildMaxHeap(arr, n);
    printf("Top %d largest elements: ", k);
    for (int i = n - 1; i >= n - k; i--) {
        printf("%d ", arr[0]);
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    findTopK(arr, n, k);
    return 0;
}
