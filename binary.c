#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1; // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}, size = 5;

    int index = binarySearch(arr, size, 40);
    printf("Found at index: %d\n", index); // Output: 3
    return 0;
}
