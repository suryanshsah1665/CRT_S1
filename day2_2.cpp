#include <stdio.h>

int main() {
    char food;
    int qty;
    int total = 0;
    printf("Menu:\n");
    printf("B - Burger (Rs 200)\n");
    printf("F - French Fries (Rs 50)\n");
    printf("P - Pizza (Rs 500)\n");
    printf("S - Sandwich (Rs 150)\n");
    printf("Enter food type: ");
    scanf(" %c", &food);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    switch (food) {
        case 'B':
        case 'b':
            total = qty * 200;
            break;
        case 'F':
        case 'f':
            total = qty * 50;
            break;

        case 'P':
        case 'p':
            total = qty * 500;
            break;

        case 'S':
        case 's':
            total = qty * 150;
            break;

        default:
            printf("Invalid food type\n");
            return 0;
    }
    printf("Total charges = Rs %d\n", total);
    return 0;
}
