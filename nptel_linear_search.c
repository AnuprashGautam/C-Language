#include <stdio.h>
int main()
{
    int array[20];
    int key, count = 0, i, j, size, isfound;
    printf("Enter the size of array:");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Enter the element, you want to find:");
    scanf("%d", &key);
    isfound=0;
    for (i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            isfound=1;
            printf("Element found at index: %d\n", i);
            count++;
        }
    }
    if(isfound==0)
    {
        printf("Element not found.");
    }
    if(isfound==1)
    {
        printf("\n\nElement found:%d\n", key);
        printf("No of times element found:%d\n", count);
    }
    return 0;
}