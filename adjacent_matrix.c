#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int r1, c1, r2, c2;
    int m1[MAX_ROWS][MAX_COLS], m2[MAX_ROWS][MAX_COLS];

    // Taking Rows and Columns
    printf("Enter the row and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the row and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Taking elements for the first matrix
    printf("\nTaking elements for the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter element at (%d,%d): ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    // Taking elements for the second matrix
    printf("\nTaking elements for the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter element at (%d,%d): ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    // Increase the size of the smaller matrix to match the larger matrix
    if (r1 < r2) {
        for (int i = r1; i < r2; i++) {
            for (int j = 0; j < c1; j++) {
                m1[i][j] = 0;
            }
        }
        r1 = r2;
    } else if (r2 < r1) {
        for (int i = r2; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                m2[i][j] = 0;
            }
        }
        r2 = r1;
    }

    // Printing the matrices side by side
    printf("\nPrinting the matrices side by side:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%4d ", m1[i][j]); // Adjust the spacing for alignment
        }
        printf("\t\t");
        for (int j = 0; j < c2; j++) {
            printf("%4d ", m2[i][j]); // Adjust the spacing for alignment
        }
        printf("\n");
    }

    return 0;
}
