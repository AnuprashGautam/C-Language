#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "Hello";
    char t[] = "Hello ";
    int a;
    a=strcmp(s,t);
    printf("%d",a);
    return 0;
}
