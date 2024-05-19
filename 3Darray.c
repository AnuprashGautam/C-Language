#include<stdio.h>
int main()
{
    int a[2][3][2]={
                       {
                        {1,2},
                        {3,4},
                        {5}
                       },
                       {
                        {10},
                        {11,12},
                        {13,14}
                       }
                    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[0][i][j]);
        }
        printf("\t");
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",a[1][i][j]);
        }
        printf("\n");
    }
    return 0;
}