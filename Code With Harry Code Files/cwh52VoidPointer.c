#include<stdio.h>
int main()
{
    int a=1;
    float b=1.5;
    void *ptr;
    ptr=&a;
    printf("Value stored in pointer:%d\n",*((int*)ptr));
    ptr=&b;
    printf("Value stored in pointer:%f\n",*((float*)ptr));
    return 0;
}