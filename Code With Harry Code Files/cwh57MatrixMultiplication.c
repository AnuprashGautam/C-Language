#include <stdio.h>
#include <string.h>
void inputmatrix(int m[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter %d,%d element:", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}
void multiply(int m1[10][10], int m2[10][10], int r[10][10], int r1, int c1, int r2, int c2)
{
    // Initializing every element with zero.
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            r[i][j] = 0;
        }
    }
    // Multiplying.
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                r[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}
void display(int r[10][10], int r1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r1, c1, r2, c2, m1[10][10], m2[10][10], r[10][10];
    printf("Enter the number of rows and columns for first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns for second matrix:");
    scanf("%d %d",&r2,&c2);
    if (c1 != r2)
    {
        printf("Sorry.The no of columns of first matrix is not equal to no of rows of second matrix.");
    }
    else
    {
        printf("\nEnter the elements for first matrix:\n");
        inputmatrix(m1, r1, c1);
        printf("\nEnter the elements for second matrix:\n");
        inputmatrix(m2, r2, c2);
        multiply(m1, m2, r, r1, c1, r2, c2);
        printf("\n\nThe resultantant matrix is:\n\n");
        display(r, r1, c2);
        printf("\nThe order of resultant matrix is:%d %d",r1,c2);
    }
    return 0;
}