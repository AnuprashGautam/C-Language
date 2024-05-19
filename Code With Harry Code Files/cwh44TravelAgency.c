#include <stdio.h>
#include <string.h>
int main()
{
    int max;
    printf("Welcome to Travel Agency.\n");
    printf("Enter the number of Drivers:");
    scanf("%d", &max);
    struct ta
    {
        char name[20];
        int lic;
        char route[20];
        int kms;
    } s[max];
    printf("\n\nTaking the information.\n\n");
    for (int i = 0; i < max; i++)
    {
        printf("Enter the details of %d driver.\n", i + 1);
        printf("Enter the name of Driver:");
        scanf("%s", &s[i].name);
        printf("Enter the License No. of Driver:");
        scanf("%d", &s[i].lic);
        printf("Enter the Route of Driver:");
        scanf("%s", &s[i].route);
        printf("Enter the Kms of Driver:");
        scanf("%d", &s[i].kms);
        printf("\n");
    }
    printf("\n\nPrinting the information,\n\n");
    for (int i = 0; i < max; i++)
    {
        printf("Details of %d driver.\n", i + 1);
        printf("Name of Driver:%s\n", s[i].name);
        printf("License Number of Driver:%d\n", s[i].lic);
        printf("Route of Driver:%s\n", s[i].route);
        printf("Kms of Driver:%d\n", s[i].kms);
        printf("\n");
    }
    return 0;
}