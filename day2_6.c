#include <stdio.h>

int main() {
    int n, i;
    int even_sum = 0;
    int odd_sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum = even_sum + i;
        }
        if (i % 2 != 0) {
            odd_sum = odd_sum + i;
        }

    }
    printf("Sum of even numbers = %d\n", even_sum);
    printf("Sum of odd numbers = %d\n", odd_sum);

    return 0;
}
