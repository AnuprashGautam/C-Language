#include<stdio.h>
#include<math.h>
#define PI 3.14
float distance(float x1, float y1, float x2, float y2)
{
    float dx = x2 - x1;
    float dy = y2 - y1;
    float dist = sqrt(dx * dx + dy * dy);
    return dist;
}
int areaofcircle(float a, float b,float c, float d,float (*fptr)(float,float,float,float)){
    float z=fptr(a,b,c,d);
    float area=PI*z*z;
    printf("The area of circle with radius %f is :%f\n",z,area);
    return 0;
}
int main()
{
    float x1,y1,x2,y2;
    float(*ptr)(float,float,float,float);//Declare
    ptr=&distance;//Create
    printf("Enter the cordinates of first point:");
    scanf("%f %f",&x1,&y1);
    printf("Enter the cordinates of second point:");
    scanf("%f %f",&x2,&y2);
    areaofcircle(x1,y1,x2,y2,ptr);
    return 0;
}