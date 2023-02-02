#include <stdio.h>

void calculateSquares(int *col, int *row, int *total) {
    int m = 0;
    for (int k = 0; k < *col; k++) {
        *total += (*col - m) * (*row - m);
        m++;
    }
}

int main() {
    int col, row, total = 0;

    printf("Enter the number of columns: ");
    scanf("%d", &col);
    while (col <= 0) {
        printf("Invalid input. Please enter a positive integer: ");
        scanf("%d", &col);
    }

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    while (row <= 0) {
        printf("Invalid input. Please enter a positive integer: ");
        scanf("%d", &row);
    }

    calculateSquares(&col, &row, &total);
    printf("The total number of squares is: %d\n", total);

    return 0;
}
