#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[20];
    int mobile;
}s1;

int main() {
    struct student* ptr=&s1;
    s1.roll=2022;
    printf("%d\n", s1.roll);//Dot operator
    printf("%d\n",(*ptr).roll);//Dereferencing operator
    printf("%d\n", ptr->roll);//Arrow operator

    return 0;
}
