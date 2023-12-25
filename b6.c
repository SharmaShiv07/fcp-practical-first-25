//basic programe 6
#include <stdio.h>
void printOddIndexedElements(int arr[], int size) {
    printf("Odd-indexed elements:\n");
    for (int i = 1; i < size; i += 2) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    // Example array
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Calling the function to print odd-indexed elements
    printOddIndexedElements(myArray, size);

    return 0;
}