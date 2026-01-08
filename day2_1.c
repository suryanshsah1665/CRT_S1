#include<stdio.h>

int main() {
    char choice;
    int a, b;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &choice);

    scanf("%d %d", &a, &b);

    switch (choice) {
        case '+':
            printf("Result = %d\n", a + b);
            break;
        case '-':
            printf("Result = %d\n", a - b);
            break;
        case '*':
            printf("Result = %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero error\n");
            break;
        default:
            printf("Invalid operator\n");
    }
}