// Find the largest and smallest elements in an array.

#include <stdio.h>

int main() {
    int n, i;
    int largest, smallest;

    // Prompt user for input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest with the first element of the array
    largest = arr[0];
    smallest = arr[0];

    // Find the largest and smallest elements
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Output the result
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
