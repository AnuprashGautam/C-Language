#include <stdio.h>
int main()
{
    int N; 
    printf("Enter the number:");
    scanf("%d",&N);
    int sum=0;
    for(int i=1;i<N;i++){
            if(N%i==0){
               sum=sum+i;
            }
    }
    if(sum==N)
            printf("\n%d is a perfect number.",N);
    else
            printf("\n%d is not a perfect number.",N);
    return 0;
}