// #include<stdio.h>
// int main()
// {
//     char string[50];
//     printf("Enter the string:");
//     scanf("%s",string);
//     printf("\nEntered string is:\n%s",string);
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     char string[50];
//     printf("Enter the string:");
//     gets(string);
//     printf("\nEntered string is:\n");
//     puts(string);
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     char string[81],ch;
//     int c=0;
//     printf("Enter the characters:");
//     do
//     {
//         ch=getchar();
//         string[c]=ch;
//         c++;
//     } while (ch!='\n');
//     c=c-1;
//     string[c]='\0';
//     printf("\nEntered string is:");
//     puts(string);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     char string[100];
//     printf("Enter the characters:");
//     scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",string);
//     printf("\nEntered string is:");
//     puts(string);
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter the characters:");
    scanf("%[^\n]",string);
    printf("\nEntered string is:");
    puts(string);
    return 0;
}