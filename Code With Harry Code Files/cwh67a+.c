#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr=NULL;
    char string[20];
    ptr=fopen("mytextfile2.txt","a+");
    if(ptr==NULL){
        printf("File did not open.");
        return 1;
    }
    //Reading the file using a+
    fgets(string,20,ptr);
    printf("Got String:%s",string);
    //Writing the file using a+
    // fputs(string,ptr);
    // fclose(ptr);
    return 0;
}
//Create the file if it does not exist.
//Don't truncate the existiong data as like w+ mode.
//Add the string in the end.



//For reading: String should be empty with proper size.
//For writing: String should be filled with desired characters.