#include <stdio.h>

int main()
{
    float m, p, c, mpc, mp;

    printf("Enter the marks of Maths:");
    scanf("%f", &m);
    printf("Enter the marks of Physics:");
    scanf("%f", &p);
    printf("Enter the marks of Chemistry:");
    scanf("%f", &c);

    mpc = m + p + c;
    mp = m + p;

    if (m >= 60 && p >= 50 && c >= 40)
    {
        if (mpc >= 200 || mp >= 100)
        {
            printf("Eligible");
        }
    }
    else
    {
        printf("Not eligible");
    }

    return 0;
}
