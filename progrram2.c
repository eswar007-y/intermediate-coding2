#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0) {
        return 0; 
    }

    int uniqueIndex = 1;

    
    for (int i = 1; i < size; i++) {
        
        if (arr[i] != arr[i - 1]) {
            arr[uniqueIndex] = arr[i]; 
            uniqueIndex++;
        }
    }

    
    return uniqueIndex;
}

int main() {
    int size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int arr[size];
    
    printf("Enter %d sorted elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    int newSize = removeDuplicates(arr, size);

    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Number of unique elements: %d\n", newSize);

    return 0;
}
