//basic programe 7
#include <stdio.h>
int findLargestElement(int arr[], int size) {
    if (size == 0) {
        // Array is empty, return an appropriate value (you can also choose to handle this differently)
        return -1; // For example, returning -1 to indicate an error
    }

    int max = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i]; // Update the maximum if a larger element is found
        }
    }

    return max; // Return the largest element
}

int main() {
    // Example array
    int myArray[] = {12, 45, 23, 67, 89, 34, 56};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Calling the function to find the largest element
    int largestElement = findLargestElement(myArray, size);

    if (largestElement != -1) {
        printf("The largest element in the array is: %d\n", largestElement);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}