#include <stdio.h>
int add(int a, int b) {
    if (b == 0)
        return a;
    return add(a + 1, b - 1);
}

int subtract(int a, int b) {
    if (b == 0)
        return a;
    return subtract(a - 1, b - 1);
}

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    return a + multiply(a, b - 1);
}

int divide(int a, int b) {
    if (a < b)
        return 0;
    return 1 + divide(a - b, b);
}

int main() {
    int choice, a, b, result;

    printf("Calculator Using Recursion\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            result = add(a, b);
            printf("Result = %d", result);
            break;

        case 2:
            result = subtract(a, b);
            printf("Result = %d", result);
            break;

        case 3:
            result = multiply(a, b);
            printf("Result = %d", result);
            break;

        case 4:
            if (b == 0)
                printf("Division by zero not allowed");
            else {
                result = divide(a, b);
                printf("Result = %d", result);
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
