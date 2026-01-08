//reverse number
#include<stdio.h>
int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int rev = 0;
    while(num) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("The reverse of %d is: %d\n", num, rev);
}