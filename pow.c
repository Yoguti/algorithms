#include <stdio.h>
#include <time.h> // Include time library for timing functions

// Function prototype declaration
double ineficient_pow(double value, int expo);
double efficient_pow(double value, int expo);

int main() {
    double value = 0;
    int expo = 0;

    printf("Insert a number value and exponent value:\n"); // Print prompt before input
    scanf("%lf %d", &value, &expo); // Use %lf for double

    // Timing the inefficient power function
    clock_t start_time = clock();
    double result_inefficient = ineficient_pow(value, expo);
    clock_t end_time = clock();
    double time_taken_inefficient = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the result and time taken for inefficient method
    printf("Inefficient Result: %lf\n", result_inefficient);
    printf("Time taken for inefficient method: %lf seconds\n", time_taken_inefficient);

    // Timing the efficient power function
    start_time = clock();
    double result_efficient = efficient_pow(value, expo);
    end_time = clock();
    double time_taken_efficient = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the result and time taken for efficient method
    printf("Efficient Result: %lf\n", result_efficient);
    printf("Time taken for efficient method: %lf seconds\n", time_taken_efficient);

    return 0;
}

double ineficient_pow(double value, int expo) {
    double result = 1.0; // Initialize result as a double

    if (expo < 0) {
        value = 1 / value;
        expo = -expo;
    }

    while (expo--) {
        result *= value;
    }
    
    return result;
}

double efficient_pow(double value, int expo) {
    double temp;
    if (expo == 0) return 1;
    temp = efficient_pow(value, expo / 2);
    if ((expo % 2) == 0) {
        return temp * temp;
    } else {
        if (expo > 0)
            return value * temp * temp;
        else
            return (temp * temp) / value;
    }
}
