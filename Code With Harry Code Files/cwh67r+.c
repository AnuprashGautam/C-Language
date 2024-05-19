#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr=NULL;
    char string[20]="zzzzz";
    ptr=fopen("mytextfile.txt","r+");
    if(ptr==NULL){
        printf("File did not open.");
        return 1;
    }
    //Reading the file using r+
    //fgets(string,11,ptr);
    //printf("Got String:%s",string);
    //OVERwriting the file using r+
    fputs(string,ptr);
    fclose(ptr);
    return 0;
}
//Does not create the file if it does not exist.
//Easily read the existing data as it does not truncate the existing data like in w+ mode.
//Write after clearing the data