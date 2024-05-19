#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    if(a>b){
        //swaping 
        temp=a;
        a=b;
        b=temp;
    }
    while ((b%a)!=0){
        temp=b%a;
        b=a;
        a=temp;
    }
    printf("The HCF of is %d.",a);
    return 0;
}