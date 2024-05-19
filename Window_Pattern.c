#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the maximum number:");
    scanf("%d\n", &n);
    for(int i=0;i<n;i++)//Outer Loop
    {
            for(int k=n;k>n-i;k--)//First part
            {
                printf("%d ",k);
            }
            for(int k=0;k<(2*n-1-2*i);k++)//Middle part
            {
                printf("%d ",n-i);    
            }
            for(int k=n-i;k<n;k++)//Last part
            {
                printf("%d ",k+1);
            }
        printf("\n");
    }
    for(int i=n,m=2,l=1;i<2*n-1;i++,m++,l++)//Outer Loop
    {
            for(int k=n;k>m;k--)//First part
            {
                printf("%d ",k);
            }
            for(int k=1;k<=((2*l)+1);k++)//Middle part
            {
                printf("%d ",m);
            }
            for(int k=m+1;k<=n;k++)//Last part
            {
                printf("%d ",k);
            }
        printf("\n");
    }
    
return 0;
}
