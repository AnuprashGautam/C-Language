#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    char *ptr;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int size;
        printf("Enter the size of Employee %d's ID: ", i + 1);
        scanf("%d", &size);

        ptr = (char *)calloc(size + 1, sizeof(char));
        if (ptr == NULL)
        {
            printf("Memory allocation failed. Exiting...");
            return 1;
        }

        printf("Enter the Employee's ID: ");
        scanf("%s",ptr);

        printf("Employee ID of %d is: %s\n", i + 1, ptr);

        free(ptr);
    }

    return 0;
}
