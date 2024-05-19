#include<stdio.h>
void display(int array[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            printf("Element %d,%d:%d\n",i+1,j+1,array[i][j]);
        }
        
    }
}
int main(){
    int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};
    display(matrix);
    return 0;
}
