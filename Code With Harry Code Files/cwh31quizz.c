// Quick Quiz:
// Given two numbers a and b,  add them then subtract them and assign them to a and b using call by reference.

// a = 4
// b = 3

// after running the function, the values of a and b should be:
// a = 7
// b = 1
#include<stdio.h>
int sum(int *x,int *y)
{
    return *x+*y;
}
int sub(int *x,int *y)
{
    return *x-*y;
}
int main()
{
    int a=4,b=3;
    printf("Value of a is:%d\n",a);
    printf("Value of b is:%d\n",b);
    printf("The sum of a and b:%d\n",sum(&a,&b));
    printf("The subtraction of a and b:%d",sub(&a,&b));
    return 0;
}
