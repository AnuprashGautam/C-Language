#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr=NULL;
    char string[20]="zzzzz";
    ptr=fopen("mytextfile1.txt","w+");
    if(ptr==NULL){
        printf("File did not open.");
        return 1;
    }
    //Reading the file using w+
    //fgets(string,11,ptr);
    //printf("Got String:%s",string);
    //Writing the file using w+
    fputs(string,ptr);
    fclose(ptr);
    return 0;
}
//When you open a file in "w+" mode, it truncates the existing content of the file, meaning it clears the file before any read or write operations. Therefore, when you try to read from the file using fgets, there is no data to read.
//It write after clearing old data.