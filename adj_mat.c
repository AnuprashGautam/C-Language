#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    int m1[10][10], m2[10][10];

    //Taking Rows and Columns

    printf("Enter the row and column for first marix:");
    scanf("%d %d", &r1, &c1);
    printf("Enter the row and column for second marix:");
    scanf("%d %d", &r2, &c2);

    //Taking elements for first matrix

    printf("\nTaking elements for firs matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter %d,%d element:", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    //Taking elements for second matrix

    printf("\nTaking elements for second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter %d,%d element:", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    //Increasing the size of smaller matrix and filling spaces.
    int a=r1,b=r2;//To store the exact values of r1 and r2
    if(r1<r2)
    {
        r1=r2;
        for(int i=(b-a+1);i<b;i++)
        {
            for(int j=0;j<c1;j++)
            {
                m1[i][j]=0;//filing with 0 to show the absence
            }
        }

    }
    else if(r2<r1)
    {
        r2=r1;
        for(int i=(a-b+1);i<a;i++)
        {
            for(int j=0;j<c2;j++)
            {
                m2[i][j]=0;//filing with 0 to show the absence
            }
        }
    }

    //Printing Matrix
    printf("\nPrinting the matrices:\n");
    for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", m1[i][j]);
            }
            printf("\t\t");
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", m2[i][j]);
            }
            printf("\n");
        }
        
    if(a>=b)
    {
        printf("LHS matrix is first and RHS matrix is second.\n");
    }
    else
    {
        printf("LHS matrix is second and RHS matrix is first.\n");
    }
    return 0;
}