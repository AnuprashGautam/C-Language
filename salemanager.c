#include <stdio.h>
#include <string.h>
#define size 6
int main()
{
    int itemsale[size];
    float sale=0,product[size], price[size];
    printf("Enter the no of items sold:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Sale of [%d] item:", i+1);
        scanf("%d", &itemsale[i]);
    }
    printf("\nEnter the prices of items:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Price of [%d] item:", i+1);
        scanf("%f", &price[i]);
    }
    // Multiplying
    for (int i = 0; i < size; i++)
    {
        sale+=itemsale[i]*price[i];
    }
    printf("Sale is: %f",sale);
    return 0;
}