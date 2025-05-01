        // Implement binary search using recursion.
        
#include <stdio.h>

// Recursive function for binary search
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Base case: target not found
    }

    int mid = left + (right - left) / 2; // Calculate mid to avoid overflow

    if (arr[mid] == target) {
        return mid; // Target found at index mid
    } 
    else if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target); // Search in the left half
    } 
    else {
        return binarySearch(arr, mid + 1, right, target); // Search in the right half
    }
}

int main() {
    int arr[] = {2, 4, 7, 10, 13, 18, 21, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target number: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
