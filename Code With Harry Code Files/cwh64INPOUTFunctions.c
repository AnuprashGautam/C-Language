// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *ptr = NULL;
//     char string[182];
//     ptr = fopen("mytextfile.txt", "r");
//     if (ptr == NULL) {
//         printf("File could not be opened.\n");
//         return 1; // Return non-zero value to indicate an error
//     }
//     fscanf(ptr,"%s", string);
//     printf("The content in file is:%s",string);
//     fclose(ptr);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     FILE *ptr=NULL;
//     ptr=fopen("mytextfile.txt","w");
//     char string[20]="Sharmaji";
//     if (ptr == NULL) {
//         printf("File could not be opened.\n");
//          return 1; // Return non-zero value to indicate an error
//     }
//     fprintf(ptr,"%s",string);
//     fclose(ptr);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("mytextfile.txt","a");
    char string[20]=" ka ladka.";
    if (ptr==NULL){
        printf("File could not be opened.\n");
        return 1; // Return non-zero value to indicate an error
    }
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}