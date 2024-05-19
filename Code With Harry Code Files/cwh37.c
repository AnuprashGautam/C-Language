#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char nickname[20];
    char chocolate[20];
}Anuprash,Anirudh;

int main()
{
    Anuprash.id=1;
    Anirudh.id=2;
    strcpy(Anuprash.nickname,"Bunty");
    strcpy(Anirudh.nickname,"Aaloo");
    strcpy(Anuprash.chocolate,"Dairy Milk");
    strcpy(Anirudh.chocolate,Anuprash.chocolate);
    printf("Anuprash id is:%d\n",Anuprash.id);
    printf("Anirudh id is:%d\n",Anirudh.id);
    printf("Anuprash nicname is:%s\n",Anuprash.nickname);
    printf("Anirudh nicname is:%s\n",Anirudh.nickname);
    printf("Anuprash favourite chocolate  is:%s\n",Anuprash.chocolate);
    printf("Anirudh favourite chocolate is:%s\n",Anirudh.chocolate);
    return 0;
}
