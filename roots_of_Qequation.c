#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1,r2,d,disc,real,img;
    printf("Root Calculator\n");
    printf("Enter the coefficients a, b, c:");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    disc=sqrt(d);
    if(disc>0){
        printf("Roots are real and unequal.\n");
        r1=(-b+disc)/(2*a);
        r2=(-b-disc)/(2*a);
        printf("Roots are:%f %f",r1,r2);
    }
    else{
        if(disc==0){
            printf("Roots are equal.\n");
            r1=r2=-b/(2*a);
            printf("Roots are:%f %f",r1,r2);
        }
        else{
            printf("Roots are imaginary.\n");
            real=-b/(2*a);
            img=disc/(2*a);
            printf("Roots are:%f+i%f and%f-i%f",real,img,real,img);
        }
    }
    return 0;
}