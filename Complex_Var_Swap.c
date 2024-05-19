#include <stdio.h>

typedef struct
{
    float rel;
    float img;
} complex;

void swap(complex *x, complex *y)
{
    complex temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() 
{
    complex num1 = {1, 1}, num2 = {2, 2};
    printf("Before swapping: %f + %fj and %f + %fj\n", num1.rel, num1.img, num2.rel, num2.img);
    swap(&num1, &num2);
    printf("After swapping: %f + %fj and %f + %fj\n", num1.rel, num1.img, num2.rel, num2.img);
    return 0;
}
