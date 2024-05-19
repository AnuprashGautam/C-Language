// #include <stdio.h>
// #include "temp.c"
// extern int a;
// int main() {
//     printf("The value of a is: %d\n", a);
//     return 0;
// }

// #include<stdio.h>
// int a=100;
// int value()
// {
//     extern int a;
//     return a;
// }
// int main()
// {
//     printf("The value of a is:%d",value());
//     return 0;
// }

#include<stdio.h>
int main()
{
    register int a=50;
    printf("The value of a is:%d",a);
    return 0;
}