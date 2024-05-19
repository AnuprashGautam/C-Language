// #include<stdio.h>
// int staticfunction()
// {
//     static int var=5;
//     var++;
//     return var;
// }
// int main()
// {
//     printf("Value of static variable:%d\n",staticfunction());
//     printf("Value of static variable:%d\n",staticfunction());
//     return 0;
// } 

// #include<stdio.h>
// int a=1;
// int main()
// {
//     int a=2;
//     printf("Value of a is:%d",a);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// void userfunction(int a){
//     printf("The address of variable in userdefined function:%d",&a);
// }
// int main()
// {
//     int b=5;
//     printf("The address of variable in main function:%d\n",&b);
//     userfunction(b);
//     return 0;
// }

// #include<stdio.h>
// void staticfunction(){
//     static int a=5;
//     printf("Value of variable:%d\n",a);
//     a++;
// }
// int main()
// {
//     staticfunction();
//     staticfunction();
//     staticfunction();
//     staticfunction();
//     return 0;
// }