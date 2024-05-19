#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int goodmorning(int a, int b, int (*fptr)(int, int))
{
    printf("Good Morning\n");
    printf("The sum of %d and %d is %d\n", a, b, fptr(a, b));
    return 0;
}

int goodafternoon(int a, int b, int (*fptr)(int, int))
{
    printf("Good Afternoon\n");
    printf("The subtraction of %d and %d is %d\n", a, b, fptr(a, b));
    return 0;
}

int main()
{
    int (*ptr)(int, int); // Declare
    int (*ptr1)(int, int); // Declare
    int a, b;
    printf("Enter first value:");
    scanf("%d", &a);
    printf("Enter second value:");
    scanf("%d", &b);
    ptr = sum; // Create
    ptr1 = sub; // Create
    goodmorning(a, b, ptr);
    goodafternoon(a, b, ptr1);
    return 0;
}
