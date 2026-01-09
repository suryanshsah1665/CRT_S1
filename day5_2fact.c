//Recurcive factorial calculator
#include <stdio.h>

/* Recursive function to calculate factorial */
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;              // Base condition
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;
    long int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %ld", num, result);
    }

    return 0;
}
