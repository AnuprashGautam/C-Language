/*#include<stdio.h>
int average(int array[]){
    int i,sum=0,avg;
    for ( i = 0; i < 10; i++)
    {
        sum=sum+array[i];
        avg=sum/(i+1);
    }
    return avg;
    
}
int main(){
    int arr[]={80,90,95,100,40,56,78,58,100,50},a;
    a=average(arr);
    printf("The average of 10 students marks is:%d",a);
    return 0;

}*/
#include<stdio.h.>
void display(int *ptr){
    printf("%d\n",*ptr);
}
int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,0};
    printf("Printing the values of array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        display(&array[i]);
    }
    return 0;
}