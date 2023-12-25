// basic programe 3
#include <stdio.h>
// Function to calculate the sum of natural numbers up to n
int calculateSum(int n) {
    int sum = 0;

    // Calculate the sum using a loop
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int n;

    // Input from user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if the entered number is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Calculate and display the sum of natural numbers up to n
        int sum = calculateSum(n);
        printf("Sum of natural numbers up to %d = %d\n", n, sum);
    }

    return 0;
}
