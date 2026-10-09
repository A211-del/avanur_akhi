#include <stdio.h>

void delete(int arr[], int *size, int pos) {
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift left
    }
    (*size)--;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50}, size = 5;

    delete(arr, &size, 2); // Delete element at index 2 (30)

    for (int i = 0; i < size; i++) printf("%d ", arr[i]); // Output: 10 20 40 50
    return 0;
}
