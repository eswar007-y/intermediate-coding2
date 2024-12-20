#include <stdio.h>

int countNotEqual(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != key) {
            count++;
        }
    }
    return count;
}

int main() {
    int size, key;

    // Take array size as input
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare the array
    int arr[size];

    // Take array elements as input from the user
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Take the key to compare against
    printf("Enter the key: ");
    scanf("%d", &key);

    // Call the function to count elements not equal to the key
    int result = countNotEqual(arr, size, key);

    // Output the result
    printf("Number of values not equal to %d: %d\n", key, result);

    return 0;
}
