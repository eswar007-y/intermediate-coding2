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

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    int arr[size];

    
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the key: ");
    scanf("%d", &key);

    
    int result = countNotEqual(arr, size, key);

    
    printf("Number of values not equal to %d: %d\n", key, result);

    return 0;
}
