#include <stdio.h>
#include <string.h>
int main()
{
    union student
    {
        char name[20];
        float height;
        int roll;
        char gender;
    };
    union student s1;
    strcpy(s1.name, "Anuradha");
    s1.roll = 1;
    s1.gender = 'F';
    s1.height = 5.7;
    printf("The name is:%s\n", s1.name);
    printf("The height is:%f", s1.height);
    printf("The gender is:%c\n", s1.gender);
    printf("The roll number is:%d\n", s1.roll);
    return 0;
}