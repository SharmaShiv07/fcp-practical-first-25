//basic programme 8
#include <stdio.h>
int calculateArraySum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i]; // Add each element to the sum
    }

    return sum; // Return the sum
}

int main() {
    // Example array
    int myArray[] = {10, 20, 30, 40, 50};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Calling the function to calculate the sum of array elements
    int sum = calculateArraySum(myArray, size);

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}