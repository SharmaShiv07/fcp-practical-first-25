//basic programe 9
#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN
void calculateArrayStats(long arr[], int n, double *average, long *max, long *min) {
    if (n <= 0) {
        // Array is empty, handle this case (you can choose to handle it differently)
        *average = 0.0;
        *max = LONG_MIN;
        *min = LONG_MAX;
        return;
    }

    long sum = 0;

    *max = arr[0];
    *min = arr[0];

    for (int i = 0; i < n; ++i) {
        sum += arr[i]; // Add each element to the sum

        if (arr[i] > *max) {
            *max = arr[i]; // Update the maximum if a larger element is found
        }

        if (arr[i] < *min) {
            *min = arr[i]; // Update the minimum if a smaller element is found
        }
    }

    *average = (double)sum / n; // Calculate the average
}

int main() {
    // Example array
    long myArray[] = {10L, 25L, 15L, 30L, 20L};
    int n = sizeof(myArray) / sizeof(myArray[0]);

    // Variables to store the results
    double average;
    long max, min;

    // Calling the function to calculate array statistics
    calculateArrayStats(myArray, n, &average, &max, &min);

    printf("Average: %.2f\n", average);
    printf("Maximum element: %ld\n", max);
    printf("Minimum element: %ld\n", min);

    return 0;
}