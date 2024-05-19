// Case:1-Deallocation of Memory
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    free(ptr);
    ptr = NULL;
    return 0;
}

// Case:2-Returning Local Variables in Function's call.
#include <stdio.h>
int *address(){
    int a = 10;
    return &a;
}
int main()
{
    
    int *ptr = address();
    printf("Address of Local Variable:%d", ptr);
    return 0;
}

//Case:3-Calling a Local Variable from Outside the Scope.
#include<stdio.h>
int main()
{
    int*ptr;
    {
        int a=10;
        ptr=&a;
    }
    printf("Address of Local Variable:%d",ptr);
    return 0;
}