#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    char b[20];
    char c[50];
    printf("Enter the first person name:");
    gets(a);
    printf("Enter the second person name:");
    gets(b);
    printf("%s is the friend of %s.\n", a, b);
    printf("After concatination:\n");
    printf("%s",strcpy(c, strcat(a, b)));
    return 0;
}