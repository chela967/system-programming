#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Prompt user to enter three numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3;

    // Print the average
    printf("The average of %.2f, %.2f, and %.2f is %.2f\n", num1, num2, num3, average);

    return 0;
}
