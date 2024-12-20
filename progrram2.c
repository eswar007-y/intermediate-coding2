#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0) {
        return 0; // If array is empty, return 0
    }

    int uniqueIndex = 1; // Start from the second element

    // Traverse the array from the second element onwards
    for (int i = 1; i < size; i++) {
        // If current element is not the same as the previous element
        if (arr[i] != arr[i - 1]) {
            arr[uniqueIndex] = arr[i]; // Move the unique element to the next available position
            uniqueIndex++;
        }
    }

    // Return the number of unique elements in the array
    return uniqueIndex;
}

int main() {
    int size;

    // Take the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare the array
    int arr[size];

    // Take array elements as input from the user
    printf("Enter %d sorted elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to remove duplicates
    int newSize = removeDuplicates(arr, size);

    // Print the modified array with unique elements
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print the new size of the array with unique elements
    printf("Number of unique elements: %d\n", newSize);

    return 0;
}
