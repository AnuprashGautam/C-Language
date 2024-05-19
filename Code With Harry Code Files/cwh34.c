#include <stdio.h>
void printstring(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i]);
        i++;
    }
}
int main()
{
    char str[30];
    printf("Enter the string:");
    scanf("%s", &str);
    // gets(str);
    printf("Printing using custom function:\n");
    printstring(str);
    printf("\nPrinting using printf function:\n");
    printf("%s", str);
    printf("\nPrinting using puts function:\n");
    puts(str);
    return 0;
}