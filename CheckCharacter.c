#include <stdio.h>
int main()
{
    char n;
    printf("Enter the charcater:");
    scanf("%c", &n);
    if (n >= 48 && n <= 57)
    {
        printf("Numeric Value");
    }
    else if (n >= 65 && n <= 90)
    {
        printf("Uppercase");
    }
    else if (n >= 97 && n <= 122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Symbol");
    }
    return 0;
}