// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int chars, i = 0;
//     char a, b;
//     char *ptr;
//     while (i < 3)
//     {
//         printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
//         scanf("%d", &chars);
//         getchar();
//         printf("Enter the value of a\n");
//         scanf("%c", &a);
//         getchar();
//         printf("Enter the value of b\n");
//         scanf("%c", &b);
//         ptr = (char *) malloc((chars+1)*sizeof(char));
//         printf("Enter your Employee Id\n");
//         scanf("%s", ptr);
//         printf("Your Employee Id is %s\n",ptr );
//         free(ptr);
//         i = i + 1;
//     }
//     return 0;
// }


//extra concept
#include<stdio.h>
int main()
{
    int i=0;
    char a,b;
    int x,y;
    while (i<3){
        printf("Enter the character for a:");
        scanf(" %c",&a);
        printf("Enter the value for x:");
        scanf("%d",&x);
        printf("Enter the value for y:");
        scanf("%d",&y);
        getchar();
        printf("Enter the character for b:");
        scanf("%c",&b);
        i++;
    }
    return 0;
}

