#include<stdio.h>
int main() {
    int arr[100] = {1,2,3,4,5};
    int size;
    printf("Enter size of array\n");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Enter the element at: %d ", (i+1));
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}