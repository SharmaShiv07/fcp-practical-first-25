//basic programme 1
#include <stdio.h>
// Function to calculate simple interest
float calculateSimpleInterest(float principal, float rate, float time) {
    // Simple Interest Formula: SI = (P * R * T) / 100
    float interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    float principal, rate, time;

    // Input from user
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate and display simple interest
    float simpleInterest = calculateSimpleInterest(principal, rate, time);
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
