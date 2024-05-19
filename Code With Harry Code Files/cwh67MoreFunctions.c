// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     FILE* ptr=NULL;
//     ptr=fopen("mytextfile.txt","r");
//     if(ptr==NULL){
//         printf("File couldn't be opened.");
//         return 1;
//     }
//     //Use of fgetc
//     char c=fgetc(ptr);
//     printf("Read Character:%c\n",c);
//     c=fgetc(ptr);
//     printf("Read Character:%c\n",c);
//     c=fgetc(ptr);
//     printf("Read Character:%c\n",c);
//     //Use of fgets
//     char string[20];
//     fgets(string,20,ptr);
//     printf("Read String:%s",string);
//     fclose(ptr);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr=NULL;
    ptr=fopen("mytextfile.txt","w");
    if(ptr==NULL){
        printf("File couldn't be opened.");
        return 1;
    }
    //Use of fputc
    char c='4';
    fputc(c,ptr);
    c='2';
    fputc(c,ptr);
    c='0';
    fputc(c,ptr);
    //Use of fgets
    char string[20]=" hai";
    fputs(string,ptr);
    fclose(ptr);
    return 0;
}
