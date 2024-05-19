#include<stdio.h>
int main()
{
    int num,dec_num,binary=0,base=1,remainder;
    printf("Enter the decimal number:");
    scanf("%d",&dec_num);
    num=dec_num;
    while (num>0)
    {
        remainder=num%2;
        binary+=(remainder*base);
        num=num/2;
        base=base*10;
    }
    printf("Enterd decimal number is:%d\n",dec_num);
    printf("Binary number is:%d\n",binary);
    return 0;
}