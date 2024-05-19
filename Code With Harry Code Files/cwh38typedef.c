// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     typedef int* integerpointer;
//     integerpointer x,y;
//     int a=1,b=2;
//     x=&a;
//     y=&b;
//     printf("Address stored in x:%d\n",x);
//     printf("Address stored in y:%d",y);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     typedef unsigned long ul;
//     ul a=3, b=4;
//     printf("The value of a is: %d\n The value of b is: %d\n",a,b);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct student
    {
        char name[20];
        int roll;
        char gender;
    }std;
    std s1,s2;
    s1.gender='M';
    strcpy(s2.name,"Anirudh Sharma");
    s1.roll=1;
    s2.roll=2;
    printf("The name of first student is:%c\n",s1.gender);
    printf("The roll number of second student is:%d",s2.roll);
    return 0;
}
