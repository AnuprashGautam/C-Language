#include<stdio.h>
#include<string.h>
int sum(int a, int b){
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    //printf("The sum of these two numbers is:%d",sum(a,b));//Testing the function
    int (*pointer)(int,int);//Declaring a function pointer.
    pointer=&sum;//Creating a function pointer.
    int c=(*pointer)(a,b);//Dereferencing the function pointer.
    printf("The sum of these two numbers is:%d",c);    
    return 0;
}