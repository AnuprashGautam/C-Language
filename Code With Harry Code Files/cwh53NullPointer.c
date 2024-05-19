//Null=(void*)0
#include<stdio.h>
int main()
{
    int a=10;
    int* ptr=&a;
    int b=20;
    if(ptr!=NULL){
        printf("Stored value at the adrress is:%d",*ptr);
    }
    else{
        printf("Pointer is a NULL pointer and can not be dereferenced.");
    }
    return 0;
}