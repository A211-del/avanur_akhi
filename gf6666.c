#include <stdio.h>

void insertElement(int arr[], int *size, int capacity, int element, int position) {
    // Check if the array is already full
    if (*size >= capacity) {
        printf("Error: Array is full. Cannot insert.\n");
        return;
    }

    // Check for a valid position
    if (position < 0 || position > *size) {
        printf("Error: Invalid position.\n");
        return;
    }

    // Shift elements to the right to make space
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element and update size
    arr[position] = element;
    (*size)++;

    printf("Successfully inserted %d at index %d.\n", element, position);
}

void printArray(int arr[], int size) {
    printf("Array: [ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Initial elements
    int size = 5;                        // Current size
    int capacity = 10;                  // Max capacity

    printf("--- Array Insertion ---\n");
    printArray(arr, size);

    // Insert 25 at index 2
    insertElement(arr, &size, capacity, 25, 2);
    printArray(arr, size);

    return 0;
}
