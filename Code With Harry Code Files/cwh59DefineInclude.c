#include <stdio.h>
#include "cwh59include.c"
#define PI 3.14        // Preprocessor Variable
#define SQUARE(x) x *x // Macro
int main()
{
    float r;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    printf("The area of circle is:%f", PI * SQUARE(r));
    printvalue();
    return 0;
}
