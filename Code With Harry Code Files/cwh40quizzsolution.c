#include <stdio.h>
void reversearray(int arr[])
{
    int temp;
    for (int i = 0; i < 10 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
}
void printarray(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("The %d element is:%d\n", i + 1, arr[i]);
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Before reversal:\n");
    printarray(array);
    printf("\nAfter reversal:\n");
    reversearray(array);
    printarray(array);
    return 0;
}