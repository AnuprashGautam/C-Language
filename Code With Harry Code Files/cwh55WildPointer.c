#include<stdio.h>
int main()
{
    int a=3456;
    int* ptr;
    //*ptr=34;
    ptr=&a;
    printf("The value in pointer is:%d",*ptr);
    return 0;
}