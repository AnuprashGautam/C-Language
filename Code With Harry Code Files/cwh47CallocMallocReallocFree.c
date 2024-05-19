// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int* ptr,n;
//     printf("Enter no of blocks:");
//     scanf("%d",&n);
//     ptr=(int*)malloc(n*sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter %d element:",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < n+1; i++)
//     {
//         printf("Entered %d element is:%d\n",i+1,ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int* ptr,n;
//     printf("Enter no of blocks:");
//     scanf("%d",&n);
//     ptr=(int*)calloc(n,sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter %d element:",i+1);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < n+1; i++)
//     {
//         printf("Entered %d element is:%d\n",i+1,ptr[i]);
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr,n;
    printf("Enter no of blocks:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Entered %d element is:%d\n",i+1,ptr[i]);
    }
    printf("Enter new no of blocks:");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Entered %d element is:%d\n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     int n;
//     printf("Enter the number of integers: ");
//     scanf("%d", &n);
//     // Allocate memory for n integers
//     ptr = (int *)malloc(n * sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed. Exiting the program.\n");
//         return 1;
//     }
//     printf("Enter %d integers:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &ptr[i]);
//     }
//     printf("Entered integers are:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }
//     printf("\n");
//     // Free memory for the first half of the integers
//     free(ptr);
//     // Modify the value of n to store a new number of integers
//     printf("Enter the new number of integers: ");
//     scanf("%d", &n);
//     // Reallocate memory for n integers
//     ptr = (int *)malloc(n * sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed. Exiting the program.\n");
//         return 1;
//     }
//     printf("Enter %d integers:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &ptr[i]);
//     }
//     printf("Entered integers are:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }
//     printf("\n");
//     // Free the memory allocated for the second set of integers
//     free(ptr);
//     return 0;
// }
