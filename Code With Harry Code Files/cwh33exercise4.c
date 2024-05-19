#include<stdio.h>
int starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        { 
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows-1-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{   int rows,type;
    printf("Enter 0 for starpatter and 1 for reverse star pattern:");
    scanf("%d",&type);
    switch (type)
    {
    case 0:
        printf("Enter the number of rows:\n");
        scanf("%d",&rows);
        starpattern(rows);
        break;
    case 1:
        printf("Enter the number of rows:\n");
        scanf("%d",&rows);
        reversestarpattern(rows);
        break;
    default:
        printf("Invalid choice.");
        break;
    }
    return 0;
}