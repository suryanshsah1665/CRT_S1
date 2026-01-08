#include<stdio.h>
int main() {
    int arr[10][10];
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    if (row==col) {
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                printf("Enter the elements at position: %d,%d",(i+1),(j+1));
                scanf("%d", &arr[i][j]);
            }
        }
        for (int i=0; i<row; i++) {
            printf("%d ", arr[i][i]);
        }
        printf("\n");
    }

}